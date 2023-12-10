#include <stdio.h>

int Fcal(int k)
{
    if (k<=1)
        return 1;
    else
    {
        return k * Fcal(k-1);
    }
    
}


// int Fcal(int k)
// {
//     int i = 0;
//     int ret = 1;
//     for (i=1;i<=k;i++)
//     {
//         ret *= i;
//     }
//     return ret;
// }

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fcal(n);
    printf("%d\n",ret);
    return 0;
}