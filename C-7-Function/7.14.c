#include <stdio.h>

void print(int n)
{
    if (n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}

int main()
{
    unsigned int num = 0;
    scanf("%d",&num);   //1234
    //递归
    print(num);


    return 0;
}