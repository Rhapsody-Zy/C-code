#include <stdio.h>
int main()
{
    int ret = 0;
    char password[20] = {0};
    int ch = 0;
    printf("请输入密码:\n");    
    scanf("%s",password);       //输入密码123456 后enter 缓冲区存在123456\n
    printf("请确认(Y/N)\n");   //123456被password带走 缓冲区剩余 \n 

    //getchar();                  //让getchar() 将缓冲区的 \n 带走，但只能带走一个
    while((ch=getchar()) != '\n')
    {
        ;
    }

    ret = getchar();            //此时第一个getchar() 自动拾取 \n  缓冲区清空
    if (ret == 'Y')
    {
        printf("确认密码\n");
    }
    else
    {
        printf("取消输入\n");
    }

    return 0;
}