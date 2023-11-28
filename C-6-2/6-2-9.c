#include <stdio.h>
int main()
{
    int m = 1;
    int n = 0;
    int k = 1;
    printf("请输入要求的阶乘数：\n");
    scanf("%d",&n);
    while (m<=n)
    {
        k = k * m;
        m++;
    }
    printf("%d\n",k);
    return 0;
}