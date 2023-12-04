#include <stdio.h>
#include <string.h>

void Swap(int x, int y)     //void意思是这个函数没有返回值，void意思为空
{ 
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a, b);
    Swap(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}