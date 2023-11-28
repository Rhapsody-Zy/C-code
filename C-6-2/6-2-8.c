#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int k = 1;
    printf("请输入要求的阶乘数：\n");
    scanf("%d",&n);
    for (m=1;m<=n;m++)
    {
        k = k*m;
    }
    printf("%d\n",k);
    return 0;
}