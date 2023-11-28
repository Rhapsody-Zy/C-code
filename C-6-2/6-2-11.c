#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int k = 1;
    int sum = 0;
    for (m=1;m<=3;m++)
    {
        k = 1;
        for(n=1;n<=m;n++)
        {
            k = k * n;
        }
        sum = sum + k;
    }
    printf("%d\n",sum);
    return 0;
}