#include <stdio.h>

int main(int argc, char** argv){
	printf("Hello, World\n");
	if(argc > 1){
		printf("Hello, %s\n", argv[1]);
	}
	return 0;
}
