#include <stdio.h>

int main(void)
{
    int a = 22;
    int b = 34;
    int max;
    
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    
    printf("max = %d\n", max);
    
    return 0;
}
