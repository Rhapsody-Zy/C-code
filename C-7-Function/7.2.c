#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "hello";
    char arr2[20] = "##############";
    strcpy(arr2,arr1);  //将arr1的内容拷贝到arr2 拷贝时也会将/0也拷贝进去
    printf("%s\n",arr2);
    return 0;
}