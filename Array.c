#include<stdio.h>
int main()
{
    int array[6] = {0, 3, 5, 2, 4, 10};
    for (int i = 0; i < 6; ++i)
    {
         if(array[i] == 4){
         printf("Ans found : %d ", array[i]);   
         }
         
    }
    puts(""); 
    return 0;
}