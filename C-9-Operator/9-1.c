#include <stdio.h>

int main()
{
    int a = 7 % 2;
    int b = 7 / 2;
    printf("%d\n", a);  //1
    printf("%d\n", b);  //3
    //取模操作符的两端必须是整数
    return 0;
}