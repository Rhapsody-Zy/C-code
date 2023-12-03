#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    //1.
// again:
//     printf("Hell0 World\n");
//     goto again;
    //2.
//     printf("Hello World\n");
//     goto again;
//     printf("Python\n");
// again:
//     printf("HeHe\n");
//     //此时goto语句将python跳过了，直接执行HeHe
    //3.关机小程序
    //shutdown -s -t 60    计划60秒后关机
    //shutdowm -a          取消计划关机
    //system               执行系统命令     头文件：<stdlib.h>
    char input[20] = {0};
    system("shutdown -s -t 600");
again:
    printf("电脑将在60秒后关机，输入“取消”进行取消:\n");
    scanf("%s", input);
    if (strcmp(input, "qx") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
    //不使用goto
    // while (1)
    // {
    //     printf("电脑将在60秒后关机，输入“取消”进行取消:\n");
    //     scanf("%s", input);
    //     if (strcmp(input, "qx") == 0)
    //     {
    //         system("shutdown -a");
    //         break;
    //     }
    // }
    // return 0;
}