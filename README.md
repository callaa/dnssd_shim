# dnssd_shim

A simple wrapper around dnssd.dll that loads the library on demand and always returns ´kDNSServiceErr_ServiceNotRunning` if the DLL is not available.

On Windows, dnssd.dll is not reliably present and Bonjour SDK's distribution terms prohibit bundling the DLL without a special license. By linking to this shim library instead, an application can use Bonjour if it is already installed on the system.

