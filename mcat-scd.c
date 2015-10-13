#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define MCAT_BUFSIZ 10

/*fonction mcat-scd*/

void
mcat_scd(char* path){
	int fd;
	char buffer[MCAT_BUFSIZ];
	fd = open(path, O_RDONLY);
	while(read(fd, buffer, MCAT_BUFSIZ) != 0){
		printf("%s", buffer);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2){
		printf ("Vieux con \n");
		return -1;
	}
	mcat_scd(argv[1]);
	return 0;
}