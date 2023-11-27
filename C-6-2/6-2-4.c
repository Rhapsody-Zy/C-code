#include <stdio.h>
int main()
{
    int i = 0;
    //for(i=1;i<=10;i++)
    for(i=1;i<=11;i++)    //前闭后开区间
    {
        if (i = 5)    //此时对变量i进行了修改，导致死循环
            continue;
        printf("%d\n",i);
    } 
    return 0;
}