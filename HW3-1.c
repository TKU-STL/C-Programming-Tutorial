#include <stdio.h>
#include <stdlib.h>

int main(){

    int list[] = {1,4,2,4,6,78,4,3,2,4};//建立資料庫

    int listLength = sizeof(list)/sizeof(int);//設定Stack大小
    
     while ( listLength != 0){
        printf("%d,", list[listLength - 1]);//輸出資料
        listLength--;
    }
  
    return 0;
  
  }
