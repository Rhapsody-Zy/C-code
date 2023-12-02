#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("************************\n");
    printf("***  1.Play  0.Exit  ***\n");
    printf("************************\n");
}
void game()
{
    //1.生成随机数
    //rand()  生成随机数，使用前需要先使用srand()进行设置，srand() - 括号中需要一个随时变换的数才能进行随机
    //数的生成，此时变引用时间戳的概念
    //时间戳 - 当前计算机的时间 减去 计算机的起始时间（1970.1.1 0：0：0）-转换成的数字
    int ret = 0;
    int guess = 0;
    //拿时间戳来设置随机数的生成起始点
    //time_t time(time_t*timer)
    //time_t
    //srand((unsigned int)time(NULL)); - 此处是为了给随机数设置起始点，起始点的设置只要在主函数中设置一次，
    //使用rand()进行调用就可以
    //RAND_MAX - 32767
    ret = rand()%100+1;   //生成1-100之间随机数，可以使用取模的方法！
    //printf("猜数字:%d\n",ret);
    //2.猜数字
    while (1)
    {
        printf("请猜数字:");
        scanf("%d",&guess);
        if (guess>ret)
        {
            printf("猜大了\n");
        }
        else if (guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        } 
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择:");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    
    return 0;
}