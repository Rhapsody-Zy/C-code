#include <stdio.h>

//函数的声明
int Add(int, int);

int main()
{
    int a = 10;
    int b = 20;
    int sum = 0;
    //函数的调用
    sum = Add(a, b);
    printf("%d\n",sum);
    return 0;
}
//当自定义函数放在main函数之后，系统只会先运行main函数，此时需要进行函数的声明
//函数的定义
int Add(int x, int y)
{
    int z = x + y;
    return z;
}