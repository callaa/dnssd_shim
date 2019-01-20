#include <stdio.h>

#include "include/dns_sd.h"
#include "include/dns_sd_shim.h"

int main(int argc, char **argv) {
	printf("Testing DNS-SD shim library.\n");
	int ok = dnssd_shim_init();

	if(ok==0) {
		printf("DNS-SD library loaded succesfully!\n");
	} else if(ok<0) {
		printf("Failed to load DNS-SD library!\n");
		return 1;
	} else if(ok>0) {
		printf("Library loaded, but getting function %d failed!\n", ok);
		return 1;
	}
	printf("All functions found!\n");

	return 0;
}

