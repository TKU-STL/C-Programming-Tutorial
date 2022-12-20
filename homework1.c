#include <stdio.h>
#include <stdlib.h>


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4};

    int listLength = sizeof(list)/sizeof(int);
    
    while (listLength != 0){
        printf("%d,", list[listLength - 1]);
        listLength--;
    }
    
    return 0;
}