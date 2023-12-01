#include <stdio.h>
int main()
{
    //当涉及到小数、分数时，定义的浮点数需要带小数点，计算时也应该带小数点
    int i = 0;
    float sum = 0.0;
    int flag = 1;
    for (i=1;i<=100;i++)
    {
        sum += flag*1.0/i;
        flag = -flag;
    }
    printf("%f\n",sum);

    return 0;
}