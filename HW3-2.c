#include <stdio.h>
#include <stdlib.h>

int main(){

    int list[] = {1,4,2,4,6,78,4,3,2,4}; //設定資料

    int listLength = sizeof(list)/sizeof(int); //設定Stack大小
    
    int i = 0;


    /* 輸出資料 */
    while (i <= listLength - 1){  
        printf("%d,", list[i]);
        i++;
    }
  return 0;
  
  }
