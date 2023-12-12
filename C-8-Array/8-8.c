#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("%p\n",arr);         //000000000061FE00
    printf("%p\n",&arr[0]);     //000000000061FE00
    printf("%d\n",*arr);        //1

    //数组名就是数组首元素的地址

    //两个例外
    //1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
    //2.&数组名，数组名代表整个数组，&数组名 - 取出的是整个数组的地址
    printf("%p\n",&arr);        //000000000061FE00
    return 0;
}