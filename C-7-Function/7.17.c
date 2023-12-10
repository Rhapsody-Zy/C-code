#include <stdio.h>

//计算第n个波菲纳契数，使用递归不合适
//int count = 0;
// int Fib(int i)
// {
//     if (i == 3)     //测试第三个波菲纳契数的计算次数
//     {
//         count++;
//     }
//     if(i<=2)
//         return 1;
//     else
//         return Fib(i-1) + Fib(i-2);
// }

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n>2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
    

}

int main()
{
    int n = 0;
    int ret= 1;
    scanf("%d",&n);
    ret = Fib(n);
    printf("%d\n",ret);
    //printf("%d\n",count);
    return 0;
}