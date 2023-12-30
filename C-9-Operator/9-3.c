#include <stdio.h>
int main()
{
    int a = 3;
    int b = -5;
    //int c = a & b;
    //int c = a | b;
    int c = a ^ b;
    printf("c = %d\n", c);  //c = -8
    return 0;
}