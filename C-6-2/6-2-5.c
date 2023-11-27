#include <stdio.h>
int main()
{
    //for循环的初始化、调整、判断都可以省略
    //for(;;)
    //    printf("hehe\n");
    int i = 0;
    int j = 0;
    for (;i<10;i++)
    {
        for(;j<10;j++)
        {
            printf("hehe\n");
        }
        //此时只会打印10个hehe，因为省略了j的初始化变量，j变为了全局变量
    }
    //变种2
    int x = 0;
    int y = 0;
    for(x=0,y=0;x<2 && y<5;++x,y++)
        printf("haha\n");
    return 0;
}
