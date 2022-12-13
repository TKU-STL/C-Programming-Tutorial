#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arr[6] = { 0, 3, 5, 2, 4, 10 };
	// Find the element 4
	for (int i = 0; i < 8; i++){
		if(arr[i] == 4){
			printf("Ans found: %d", arr[i]);
		}
	}

	return 0;
}