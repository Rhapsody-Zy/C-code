#include <stdio.h>

//不使用strlen函数计算数组的长度
// int my_strlen(char* str)
// {
//     //计算字符串的长度
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }


//不创建临时变量计算数组的长度
int my_strlen(char* str)
{
    if (*str != '\0')
    {
        return 1+my_strlen(str+1);
    }
    else
        return 0;
}

int main()
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("len = %d\n", len);
    return 0;
}