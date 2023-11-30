#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char arr1[] = "Hello World!";
    char arr2[] = "############";
    int left =0;
    //int right = sizeof(arr1)/sizeof(arr1[0])-2;
    int right = strlen(arr1)-1;
    while (left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);    //休息一秒
        left++;
        right--;
    }
    
    return 0;
}