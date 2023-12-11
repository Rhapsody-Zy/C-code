#include <stdio.h>
#include <string.h>
int main()
{
    //创建一个数组 - 存放整形 - 10个
    int arr[10] = {1,2,3};      //不完全初始化，剩下的元素默认初始化为0
    //int n = 0;
    //char arr3[n];   //error

    char arr2[5] = {'a','b'};
    char arr3[5] = "ab";        //真正放到初始化中的为 a b \0  0 0
    char arr4[5] = {'a',98};    //初始化的98转换为 b
    char arr5[] = "abcdef";

    printf("%d\n",sizeof(arr5));    //7  sizeof 计算arr4所占空间大小
    printf("%d\n",strlen(arr5));    //6  strlen 计算arr4字符串长度
    // 1、strlen 和 sizeof 没有什么关联
    // 2、strlen 是求字符串长度的 - 只能针对字符串长度 - 库函数-谁用需要引用头文件
    // 3、sizeof 计算变量、数组、类型的大小 - 单位是字节 - 操作符
    
    char arr6[] = "abc";
    char arr7[] = {'a','b','c'};
    printf("%d\n",sizeof(arr6));    //4
    printf("%d\n",sizeof(arr7));    //3
    printf("%d\n",strlen(arr6));    //3
    printf("%d\n",strlen(arr7));    //随机数

    return 0;
}