#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a = 6;
    int b = 8;
    int c = 10;
    if (c<a+b){
		printf("This is a triangle\n");
	}else if (c=a+b){
		printf("This isn't a triangle\n");
	}else if (c>a+b){
		printf("This isn't a triangle\n");
	}

	return 0;
}