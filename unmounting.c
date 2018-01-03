#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

int isEmpty(){
	int n = 0;
	struct dirent *d;
	DIR *dir = opendir("/mnt/usbdrive");
	if (dir == NULL)
		return 1;
	while ((d = readdir(dir)) != NULL){
		if (++n > 2)
			break;
	}
	closedir(dir);
	if (n <= 2)
		return 1;
	else	return 0;
}

int main(){
	
	printf("Unmounting...\n");
	system("sudo umount /mnt/usbdrive");
	if (isEmpty){
		printf("Unmounted successfuly\n");
		system("sudo eject /dev/sdb");
		return 0;
	}
	else{
		printf("Error unmounting\n");
		return 1;
}

	return -1;
}
