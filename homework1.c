#include <stdio.h>
#include <stdlib.h>//從資料庫中引入可輸入的指令


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4};//list矩陣

    int listLength = sizeof(list)/sizeof(int);//把list矩陣裡面的數字存取到listLength這個變量裡面
    
    while (listLength != 0){//While 迴圈，若沒有達成則會不斷執行    
        printf("%d,", list[listLength - 1]);// listlength是指矩陣中的位置，所以list [listLength - 1]就會是從最後面開始
        listLength--;
    }
    
    return 0;//結束
}