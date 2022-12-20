#include <stdio.h>
#include <stdlib.h>


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4};
    
    int listLength = sizeof(list)/sizeof(int);
    
    int i = 0;
    
    while (i <= listLength - 1){
        printf("%d,", list[i]);
        i++;
    }
    
    return 0;
}