#include <stdio.h>
int is_prime(int x)
{
    int y = 0;
    for (y=2;y<x;y++)
    {
        if (x%y==0)
            return 0;
    }
    return 1;
}

int main()
{
    int i = 0;
    for (i = 101;i<=200;i+=2)
    {   
        if (is_prime(i) == 1)
            printf("%d ", i);
    }
    return 0;
}