# dnssd_shim
A simple wrapper around dnssd.dll that loads the library on demand and always returns kDNSServiceErr_ServiceNotRunning if the DLL is not available.
