/* This file was generated from dns_sd.h with make_shim.py */

/* Function types */
typedef DNSServiceErrorType (*DNSServiceGetPropertyFunc)();
typedef int (*DNSServiceRefSockFDFunc)();
typedef DNSServiceErrorType (*DNSServiceProcessResultFunc)();
typedef void (*DNSServiceRefDeallocateFunc)();
typedef DNSServiceErrorType (*DNSServiceEnumerateDomainsFunc)();
typedef DNSServiceErrorType (*DNSServiceRegisterFunc)();
typedef DNSServiceErrorType (*DNSServiceAddRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceUpdateRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceRemoveRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceBrowseFunc)();
typedef DNSServiceErrorType (*DNSServiceResolveFunc)();
typedef DNSServiceErrorType (*DNSServiceQueryRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceGetAddrInfoFunc)();
typedef DNSServiceErrorType (*DNSServiceCreateConnectionFunc)();
typedef DNSServiceErrorType (*DNSServiceRegisterRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceReconfirmRecordFunc)();
typedef DNSServiceErrorType (*DNSServiceNATPortMappingCreateFunc)();
typedef DNSServiceErrorType (*DNSServiceConstructFullNameFunc)();
typedef void (*TXTRecordCreateFunc)();
typedef void (*TXTRecordDeallocateFunc)();
typedef DNSServiceErrorType (*TXTRecordSetValueFunc)();
typedef DNSServiceErrorType (*TXTRecordRemoveValueFunc)();
typedef uint16_t (*TXTRecordGetLengthFunc)();
typedef void* (*TXTRecordGetBytesPtrFunc)();
typedef int (*TXTRecordContainsKeyFunc)();
typedef void* (*TXTRecordGetValuePtrFunc)();
typedef uint16_t (*TXTRecordGetCountFunc)();
typedef DNSServiceErrorType (*TXTRecordGetItemAtIndexFunc)();

/* Shim function pointers */
static DNSServiceGetPropertyFunc shim_DNSServiceGetProperty;
static DNSServiceRefSockFDFunc shim_DNSServiceRefSockFD;
static DNSServiceProcessResultFunc shim_DNSServiceProcessResult;
static DNSServiceRefDeallocateFunc shim_DNSServiceRefDeallocate;
static DNSServiceEnumerateDomainsFunc shim_DNSServiceEnumerateDomains;
static DNSServiceRegisterFunc shim_DNSServiceRegister;
static DNSServiceAddRecordFunc shim_DNSServiceAddRecord;
static DNSServiceUpdateRecordFunc shim_DNSServiceUpdateRecord;
static DNSServiceRemoveRecordFunc shim_DNSServiceRemoveRecord;
static DNSServiceBrowseFunc shim_DNSServiceBrowse;
static DNSServiceResolveFunc shim_DNSServiceResolve;
static DNSServiceQueryRecordFunc shim_DNSServiceQueryRecord;
static DNSServiceGetAddrInfoFunc shim_DNSServiceGetAddrInfo;
static DNSServiceCreateConnectionFunc shim_DNSServiceCreateConnection;
static DNSServiceRegisterRecordFunc shim_DNSServiceRegisterRecord;
static DNSServiceReconfirmRecordFunc shim_DNSServiceReconfirmRecord;
static DNSServiceNATPortMappingCreateFunc shim_DNSServiceNATPortMappingCreate;
static DNSServiceConstructFullNameFunc shim_DNSServiceConstructFullName;
static TXTRecordCreateFunc shim_TXTRecordCreate;
static TXTRecordDeallocateFunc shim_TXTRecordDeallocate;
static TXTRecordSetValueFunc shim_TXTRecordSetValue;
static TXTRecordRemoveValueFunc shim_TXTRecordRemoveValue;
static TXTRecordGetLengthFunc shim_TXTRecordGetLength;
static TXTRecordGetBytesPtrFunc shim_TXTRecordGetBytesPtr;
static TXTRecordContainsKeyFunc shim_TXTRecordContainsKey;
static TXTRecordGetValuePtrFunc shim_TXTRecordGetValuePtr;
static TXTRecordGetCountFunc shim_TXTRecordGetCount;
static TXTRecordGetItemAtIndexFunc shim_TXTRecordGetItemAtIndex;

/* Load functions from the DNS-SD library. */
/* The library must have been opened before calling this. */
/* Returns nonzero on error. */
static int _dnssd_shim_loadfuncs() {
	if(!(shim_DNSServiceGetProperty = GetProcAddress(_DNSSD_MODULE, "DNSServiceGetProperty"))) return 1;
	if(!(shim_DNSServiceRefSockFD = GetProcAddress(_DNSSD_MODULE, "DNSServiceRefSockFD"))) return 2;
	if(!(shim_DNSServiceProcessResult = GetProcAddress(_DNSSD_MODULE, "DNSServiceProcessResult"))) return 3;
	if(!(shim_DNSServiceRefDeallocate = GetProcAddress(_DNSSD_MODULE, "DNSServiceRefDeallocate"))) return 4;
	if(!(shim_DNSServiceEnumerateDomains = GetProcAddress(_DNSSD_MODULE, "DNSServiceEnumerateDomains"))) return 5;
	if(!(shim_DNSServiceRegister = GetProcAddress(_DNSSD_MODULE, "DNSServiceRegister"))) return 6;
	if(!(shim_DNSServiceAddRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceAddRecord"))) return 7;
	if(!(shim_DNSServiceUpdateRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceUpdateRecord"))) return 8;
	if(!(shim_DNSServiceRemoveRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceRemoveRecord"))) return 9;
	if(!(shim_DNSServiceBrowse = GetProcAddress(_DNSSD_MODULE, "DNSServiceBrowse"))) return 10;
	if(!(shim_DNSServiceResolve = GetProcAddress(_DNSSD_MODULE, "DNSServiceResolve"))) return 11;
	if(!(shim_DNSServiceQueryRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceQueryRecord"))) return 12;
	if(!(shim_DNSServiceGetAddrInfo = GetProcAddress(_DNSSD_MODULE, "DNSServiceGetAddrInfo"))) return 13;
	if(!(shim_DNSServiceCreateConnection = GetProcAddress(_DNSSD_MODULE, "DNSServiceCreateConnection"))) return 14;
	if(!(shim_DNSServiceRegisterRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceRegisterRecord"))) return 15;
	if(!(shim_DNSServiceReconfirmRecord = GetProcAddress(_DNSSD_MODULE, "DNSServiceReconfirmRecord"))) return 16;
	if(!(shim_DNSServiceNATPortMappingCreate = GetProcAddress(_DNSSD_MODULE, "DNSServiceNATPortMappingCreate"))) return 17;
	if(!(shim_DNSServiceConstructFullName = GetProcAddress(_DNSSD_MODULE, "DNSServiceConstructFullName"))) return 18;
	if(!(shim_TXTRecordCreate = GetProcAddress(_DNSSD_MODULE, "TXTRecordCreate"))) return 19;
	if(!(shim_TXTRecordDeallocate = GetProcAddress(_DNSSD_MODULE, "TXTRecordDeallocate"))) return 20;
	if(!(shim_TXTRecordSetValue = GetProcAddress(_DNSSD_MODULE, "TXTRecordSetValue"))) return 21;
	if(!(shim_TXTRecordRemoveValue = GetProcAddress(_DNSSD_MODULE, "TXTRecordRemoveValue"))) return 22;
	if(!(shim_TXTRecordGetLength = GetProcAddress(_DNSSD_MODULE, "TXTRecordGetLength"))) return 23;
	if(!(shim_TXTRecordGetBytesPtr = GetProcAddress(_DNSSD_MODULE, "TXTRecordGetBytesPtr"))) return 24;
	if(!(shim_TXTRecordContainsKey = GetProcAddress(_DNSSD_MODULE, "TXTRecordContainsKey"))) return 25;
	if(!(shim_TXTRecordGetValuePtr = GetProcAddress(_DNSSD_MODULE, "TXTRecordGetValuePtr"))) return 26;
	if(!(shim_TXTRecordGetCount = GetProcAddress(_DNSSD_MODULE, "TXTRecordGetCount"))) return 27;
	if(!(shim_TXTRecordGetItemAtIndex = GetProcAddress(_DNSSD_MODULE, "TXTRecordGetItemAtIndex"))) return 28;
	return 0;
}

/* Shim functions */
DNSServiceErrorType DNSServiceGetProperty(const char *property, void *result, uint32_t *size) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceGetProperty(property, result, size);
}

int DNSServiceRefSockFD(DNSServiceRef sdRef) {
   if(dnssd_shim_init())
       return 0;
   return shim_DNSServiceRefSockFD(sdRef);
}

DNSServiceErrorType DNSServiceProcessResult(DNSServiceRef sdRef) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceProcessResult(sdRef);
}

void DNSServiceRefDeallocate(DNSServiceRef sdRef) {
   if(dnssd_shim_init()==0)
       shim_DNSServiceRefDeallocate(sdRef);
}

DNSServiceErrorType DNSServiceEnumerateDomains(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, DNSServiceDomainEnumReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceEnumerateDomains(sdRef, flags, interfaceIndex, callBack, context);
}

DNSServiceErrorType DNSServiceRegister(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, const char *name, const char *regtype, const char *domain, const char *host, uint16_t port, uint16_t txtLen, const void *txtRecord, DNSServiceRegisterReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceRegister(sdRef, flags, interfaceIndex, name, regtype, domain, host, port, txtLen, txtRecord, callBack, context);
}

DNSServiceErrorType DNSServiceAddRecord(DNSServiceRef sdRef, DNSRecordRef *RecordRef, DNSServiceFlags flags, uint16_t rrtype, uint16_t rdlen, const void *rdata, uint32_t ttl) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceAddRecord(sdRef, RecordRef, flags, rrtype, rdlen, rdata, ttl);
}

DNSServiceErrorType DNSServiceUpdateRecord(DNSServiceRef sdRef, DNSRecordRef RecordRef, DNSServiceFlags flags, uint16_t rdlen, const void *rdata, uint32_t ttl) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceUpdateRecord(sdRef, RecordRef, flags, rdlen, rdata, ttl);
}

DNSServiceErrorType DNSServiceRemoveRecord(DNSServiceRef sdRef, DNSRecordRef RecordRef, DNSServiceFlags flags) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceRemoveRecord(sdRef, RecordRef, flags);
}

DNSServiceErrorType DNSServiceBrowse(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, const char *regtype, const char *domain, DNSServiceBrowseReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceBrowse(sdRef, flags, interfaceIndex, regtype, domain, callBack, context);
}

DNSServiceErrorType DNSServiceResolve(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, const char *name, const char *regtype, const char *domain, DNSServiceResolveReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceResolve(sdRef, flags, interfaceIndex, name, regtype, domain, callBack, context);
}

DNSServiceErrorType DNSServiceQueryRecord(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, const char *fullname, uint16_t rrtype, uint16_t rrclass, DNSServiceQueryRecordReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceQueryRecord(sdRef, flags, interfaceIndex, fullname, rrtype, rrclass, callBack, context);
}

DNSServiceErrorType DNSServiceGetAddrInfo(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, DNSServiceProtocol protocol, const char *hostname, DNSServiceGetAddrInfoReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceGetAddrInfo(sdRef, flags, interfaceIndex, protocol, hostname, callBack, context);
}

DNSServiceErrorType DNSServiceCreateConnection(DNSServiceRef *sdRef) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceCreateConnection(sdRef);
}

DNSServiceErrorType DNSServiceRegisterRecord(DNSServiceRef sdRef, DNSRecordRef *RecordRef, DNSServiceFlags flags, uint32_t interfaceIndex, const char *fullname, uint16_t rrtype, uint16_t rrclass, uint16_t rdlen, const void *rdata, uint32_t ttl, DNSServiceRegisterRecordReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceRegisterRecord(sdRef, RecordRef, flags, interfaceIndex, fullname, rrtype, rrclass, rdlen, rdata, ttl, callBack, context);
}

DNSServiceErrorType DNSServiceReconfirmRecord(DNSServiceFlags flags, uint32_t interfaceIndex, const char *fullname, uint16_t rrtype, uint16_t rrclass, uint16_t rdlen, const void *rdata) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceReconfirmRecord(flags, interfaceIndex, fullname, rrtype, rrclass, rdlen, rdata);
}

DNSServiceErrorType DNSServiceNATPortMappingCreate(DNSServiceRef *sdRef, DNSServiceFlags flags, uint32_t interfaceIndex, DNSServiceProtocol protocol, uint16_t internalPort, uint16_t externalPort, uint32_t ttl, DNSServiceNATPortMappingReply callBack, void *context) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceNATPortMappingCreate(sdRef, flags, interfaceIndex, protocol, internalPort, externalPort, ttl, callBack, context);
}

DNSServiceErrorType DNSServiceConstructFullName(char *fullName, const char *service, const char *regtype, const char *domain) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_DNSServiceConstructFullName(fullName, service, regtype, domain);
}

void TXTRecordCreate(TXTRecordRef *txtRecord, uint16_t bufferLen, void *buffer) {
   if(dnssd_shim_init()==0)
       shim_TXTRecordCreate(txtRecord, bufferLen, buffer);
}

void TXTRecordDeallocate(TXTRecordRef *txtRecord) {
   if(dnssd_shim_init()==0)
       shim_TXTRecordDeallocate(txtRecord);
}

DNSServiceErrorType TXTRecordSetValue(TXTRecordRef *txtRecord, const char *key, uint8_t valueSize, const void *value) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_TXTRecordSetValue(txtRecord, key, valueSize, value);
}

DNSServiceErrorType TXTRecordRemoveValue(TXTRecordRef *txtRecord, const char *key) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_TXTRecordRemoveValue(txtRecord, key);
}

uint16_t TXTRecordGetLength(const TXTRecordRef *txtRecord) {
   if(dnssd_shim_init())
       return 0;
   return shim_TXTRecordGetLength(txtRecord);
}

const void *TXTRecordGetBytesPtr(const TXTRecordRef *txtRecord) {
   if(dnssd_shim_init())
       return 0;
   return shim_TXTRecordGetBytesPtr(txtRecord);
}

int TXTRecordContainsKey(uint16_t txtLen, const void *txtRecord, const char *key) {
   if(dnssd_shim_init())
       return 0;
   return shim_TXTRecordContainsKey(txtLen, txtRecord, key);
}

const void *TXTRecordGetValuePtr(uint16_t txtLen, const void *txtRecord, const char *key, uint8_t *valueLen) {
   if(dnssd_shim_init())
       return 0;
   return shim_TXTRecordGetValuePtr(txtLen, txtRecord, key, valueLen);
}

uint16_t TXTRecordGetCount(uint16_t txtLen, const void *txtRecord) {
   if(dnssd_shim_init())
       return 0;
   return shim_TXTRecordGetCount(txtLen, txtRecord);
}

DNSServiceErrorType TXTRecordGetItemAtIndex(uint16_t txtLen, const void *txtRecord, uint16_t itemIndex, uint16_t keyBufLen, char *key, uint8_t *valueLen, const void **value) {
   if(dnssd_shim_init())
       return kDNSServiceErr_ServiceNotRunning;
   return shim_TXTRecordGetItemAtIndex(txtLen, txtRecord, itemIndex, keyBufLen, key, valueLen, value);
}

