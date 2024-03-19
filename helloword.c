#include <stdio.h>

int main(void)
{
    int a = 0;

    do
    {
        a += 2;
    }while (a < 200);
    
    printf("a = %d", a);
    
}