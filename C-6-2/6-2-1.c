#include <stdio.h>
int main()
{
    int ch = 0;
    //EOF - end of file 文件结束标志
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}