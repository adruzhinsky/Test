#include <stdio.h>

int main(void)
{
    int x = 34;
    int y = 50;
    int z = 888;
    int z = 999;
    int z = 111111;
    int z = 2222222;
    int z = 77777;
    int z = 12357;	
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    // swapping...
    int temp = x;
    x = y;
    y = temp;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
