//计算一个整数存储在内存中的二进制中的1的个数
#include <stdio.h>
int main()
{
    //a为要求的整数
    int a = -3;
    int i = 0;
    int sum = 0;
    for (i = 0; i < 64; i++)
    {
        int s = a & 1;
        if (s == 1)
        {
            sum += 1;
        }
        a = a >> 1;
        
    }
    printf("sum=%d\n", sum);
    return 0;
