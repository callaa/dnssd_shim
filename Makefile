libdnssd_shim.a: dnssd_shim.o
	${AR} rcs $@ $^

test: libdnssd_shim.a
	${CC} dnssd_test.c -o dnssd_test.exe -L. -ldnssd_shim -mconsole
	./dnssd_test.exe

clean:
	rm -f dnssd_test.exe *.o *.a

regen:
	python3 ./make_shim.py > dnssd_shim_funcs.h

