#ifndef DNS_SD_SHIM_H
#define DNS_SD_SHIM_H

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * Explicitly initialize the DNS-SD shim library.
 *
 * Typically, you only need to call this yourself if you need to know whether the library
 * was loaded succesfully.
 *
 * Returns zero on success.
 * A negative return value means an error occurred while loading the dnssd DLL.
 * A positive return value n means the address of the nth function couldn't be loaded.
 */
extern int dnssd_shim_init(void);

#ifdef  __cplusplus
}
#endif

#endif

