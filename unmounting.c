#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <colors.h> // Custom library (on my github)

int isEmpty(){
	int n = 0;
	struct dirent *d;
	DIR *dir = opendir("/mnt");
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
	
	system("sudo umount /mnt");
	if (isEmpty()){
		printf(GRN "Unmounted successfuly\n" RESET);
		system("sudo eject /dev/sdb");
		return 0;
	}
	else{
		printf(RED "Error unmounting\n" RESET);
		return 1;
}

	return -1;
}
