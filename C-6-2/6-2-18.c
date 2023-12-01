#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0;
    int count = 0;
    for(i=101;i<200;i+=2)
    {
        //判断是否为素数
        //素数判断规则（素数是只能被1和他本身整数的数）
        //1.试除法
        int j = 0;
        for (j=2;j<i;j++)
        //sqrt - 数学库函数中的开平方
        for (j=2;j<=sqrt(i);i++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
        if (j == i)
        if(j>sqrt(i))
        {
            count++;
            printf("%d ", i);

        }
    }
    printf("\ncount=%d\n",count);
    return 0;
}