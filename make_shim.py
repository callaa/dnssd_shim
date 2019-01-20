#!/usr/bin/env python3

import sys

from pycparser import c_parser, c_generator, c_ast, parse_file

ERROR_RETURNS = {
    'DNSServiceErrorType': 'kDNSServiceErr_ServiceNotRunning',
    'void*': '0',
    'void': '',
    'int': '0',
    'uint16_t': '0',
}


def get_func_decls(root):
    funcs = []
    cgen = c_generator.CGenerator()
    for node in root.ext:
        if isinstance(node, c_ast.Decl):
            if isinstance(node.type, c_ast.FuncDecl):
                func = node.type
                if isinstance(func.type, c_ast.PtrDecl):
                    name = func.type.type.declname
                    rettype = func.type.type.type.names[0] + '*'
                    is_void = False
                else:
                    name = func.type.declname
                    rettype = func.type.type.names[0]
                    is_void = func.type.type.names[0] == 'void'

                funcs.append({
                    'name': name,
                    'type': rettype,
                    'is_void': is_void,
                    'params': func.args,
                    'decl': cgen.visit(func),
                })

    return funcs


def make_shims(funcs):

    print("/* This file was generated from dns_sd.h with make_shim.py */\n")

    # Generate function pointer typedefs
    print("/* Function types */")
    for func in funcs:
        param_types = [] #self._generate_type(p) for p in func['params'].params

        print("typedef {type} (*{name}Func)({params});".format(
            type=func['type'],
            name=func['name'],
            params=','.join(param_types)
            ))

    # Generate function pointer variables
    print("\n/* Shim function pointers */")

    for func in funcs:
        print("static {name}Func shim_{name};".format(
            name=func['name'],
            ))

    # Generate library loader
    print("\n/* Load functions from the DNS-SD library. */")
    print("/* The library must have been opened before calling this. */")
    print("/* Returns nonzero on error. */")
    print("static int _dnssd_shim_loadfuncs() {")
    for i, func in enumerate(funcs):
        print('\tif(!(shim_{name} = GetProcAddress(_DNSSD_MODULE, "{name}"))) return {i};'.format(
            name=func['name'],
            i=i+1
            ))
    print("\treturn 0;\n}")

    # Generate shim functions
    print("\n/* Shim functions */")
    for func in funcs:
        print('{decl} {{'.format(decl=func['decl']))
        if func['is_void']:
            funccall = ''\
                '   if(dnssd_shim_init()==0)\n'\
                '       shim_{name}({params});'
            error_value = ''
        else:
            funccall = ''\
                '   if(dnssd_shim_init())\n'\
                '       return {error};\n'\
                '   return shim_{name}({params});'

        if func['type'] not in ERROR_RETURNS:
            raise ValueError('Error return value for type ' + func['type'] + ' not defined!')

        print(funccall.format(
            decl=func['decl'],
            name=func['name'],
            error=ERROR_RETURNS[func['type']],
            params=', '.join(p.name for p in func['params'].params)
        ))
        print('}\n')


if __name__ == "__main__":
    if len(sys.argv) > 1:
        filename  = sys.argv[1]
    else:
        filename = 'include/dns_sd.h'

    ast = parse_file(filename, use_cpp=True)
    funcs = get_func_decls(ast)
    make_shims(funcs)

