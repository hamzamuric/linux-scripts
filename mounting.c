#include <stdio.h>
#include <unistd.h>

int main(){

	system("sudo mount /dev/sdb1 /mnt/usbdrive");
	printf("Device mounted at '/mnt/usbdrive'\n");
	
	return 0;
}
