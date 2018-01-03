#include <stdio.h>
#include <unistd.h>

int main(){

	system("sudo mount /dev/sdb1 /mnt/plavi");
	printf("Device mounted at '/mnt/plavi'\n");
	
	return 0;
}
