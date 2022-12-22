#include <stdio.h>
#include <stdlib.h>


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4}; //建立矩陣

    int listLength = sizeof(list)/sizeof(int); //知道list數字有多少
    
    while (listLength != 0){
        printf("%d,", list[listLength - 1]);
        listLength--;
    } //開始while迴圈，輸出 list，listLength - 1 是從後面開始一一輸出
    
    return 0;
}
