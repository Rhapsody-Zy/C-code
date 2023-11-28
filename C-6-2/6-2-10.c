#include <stdio.h>
int main()
{
    int m = 1;
    int n = 0;
    int k = 1;
    printf("请输入要求的阶乘数：\n");
    scanf("%d",&n);
    do
    {
        if(n == 0)
        {
            printf("0");
            break;
        }
            
        k = k * m;
        m++;
    } while (m<=n);
    
    printf("%d\n",k);
    return 0;
}