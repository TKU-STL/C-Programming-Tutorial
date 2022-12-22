#include <stdio.h>
#include <stdlib.h>


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4}; //建立矩陣
    
    int listLength = sizeof(list)/sizeof(int); //知道list數字有多少
    
    int i = 0; //list裡的位置是從0開始，而i是第一個數字
    
    while (i <= listLength - 1){
        printf("%d,", list[i]);
        i++;
    } //開始while迴圈，而這個會從i開始輸出數字，直到到 listLength - 1 時停止
    
    return 0;
}
