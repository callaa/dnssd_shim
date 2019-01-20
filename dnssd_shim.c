#include "include/dns_sd.h"
#include "include/dns_sd_shim.h"

#include <windows.h>

static HMODULE _DNSSD_MODULE;

#include "dnssd_shim_funcs.h"

/* States:
 * -2: Unable to load the library
 * -1: Not yet loaded
 *  0: Loaded succesfully
 *  n: Error occurred while getting the address of the n:th function
 */
static int SHIM_STATUS = -1;

/**
 * Initialize the DNS-SD shim
 *
 * Returns nonzero on error.
 */
int dnssd_shim_init(void)
{
	if(SHIM_STATUS == -1) {
		_DNSSD_MODULE = LoadLibrary("dnssd.dll");
		if(!_DNSSD_MODULE) {
			SHIM_STATUS = -2;

		} else {
			SHIM_STATUS = _dnssd_shim_loadfuncs();
		}
	}
	return SHIM_STATUS;
}

