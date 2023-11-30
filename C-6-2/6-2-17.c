//辗转相除法
#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int k = 0;
    scanf("%d%d", &m, &n);
    while (m%n)
    {
        k = m%n;
        m = n;
        n = k;
    }
    printf("%d\n",n);
    return 0;
}