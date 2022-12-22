#include<stdio.h>

int main(void){
	int var = 100; //var是100

	if(var != 0){
		printf("The answer is not a zero\n");
	}  //先執行 var是不等於0，如果不等於零，會輸出 The answer is not a zero
    if (var > 0){
			printf("The answer is greater than zero\n");
	}  //之後再來執行 var大於0，如果大於零，會輸出 The answer is greater than zero
	
    

	return 0;
}
