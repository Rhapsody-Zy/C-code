#include <stdio.h>
int main()
{
    int i = 0;
    for (i=1;i<=9;i++)
    {
        int j = 1;
        for (j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ", i, j, i*j);
            //%-2d - 打印的结果存在两位，当只有一位数是，自动补0
            //带 - 即为向左对齐
        }
        printf("\n");
    }
    return 0;
}