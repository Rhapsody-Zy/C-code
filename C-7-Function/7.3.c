#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "hello world";
    memset(arr,'*',5);
    printf("%s\n",arr);
    //***** world
    return 0;
}