#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1;
    char password[20] = {0};
    for (i=0;i<3;i++)
    {
        printf("请输入密码:>");
        scanf("%s",password);
        if (strcmp(password,"123456") == 0)
        {
            printf("登录成功！\n");
            break;
        }
        printf("密码错误，请重试！\n");
    }
    if(i == 3)
    {
        printf("登录失败！\n");
    }
    return 0;
}