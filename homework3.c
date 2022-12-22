#include<stdio.h>

int main(void){
	int var = 100;

	if(var != 0){//if寫成兩個的話是指執行一個，若是內嵌式的話則是兩個都會執行
		printf("The answer is not a zero\n");
	}
	if (var > 0){
		printf("The answer is greater than zero\n");
	}

	return 0;
}