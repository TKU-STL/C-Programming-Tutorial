#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arr[4] = { 5, 7, 1, 6 };
   int len = 0;
   while(arr[len] != '\0'){
      len++;
   }

	 printf("The length of the array is %d\n", len);

	return 0;
}