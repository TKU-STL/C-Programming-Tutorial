#include <stdio.h>
#include <stdlib.h>//從資料庫中引入可輸入的指令


void main(void){

    int list[] = {1,4,2,4,6,78,4,3,2,4};//list矩陣
    
    int listLength = sizeof(list)/sizeof(int);//把list矩陣裡面的數字存取到listLength這個變量裡面
    
    int i = 0;//i就是list裡面的位置，而list裡面的位置是[0 1 2 3 4 5 6 7 8 9]，i=0就是第一個數字
    
    while (i <= listLength - 1){//While 迴圈，若沒有達成則會不斷執行，但是跟第一題不一樣的是從0開始往前面找，直到找到跟listLength = 9 停止
        printf("%d,", list[i]);
        i++;//會一直往前面找
    }
    
    return 0;//結束
}