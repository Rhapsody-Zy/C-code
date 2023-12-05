#include <stdio.h>
#include <string.h>

void Swap1(int x, int y)     //void意思是这个函数没有返回值，void意思为空
{ 
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}
//-------以上操作不能将两个整数类型进行互换--------
//当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的

void Swap2(int* pa,int* pb)     //void意思是这个函数没有返回值，void意思为空
{ 
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a, b);
    Swap2(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

// int main()
// {
//     int a = 0;
//     int* pa = &a;    //pa用于存放a的地址，pa此时为指针变量，用int*进行修饰
//     *pa = 20;        //解引用操作
//     return 0;
// }
