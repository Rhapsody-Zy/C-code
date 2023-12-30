#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    printf("交换前: a=%d b=%d\n", a, b);

    //方法一
    // a = a + b;
    // b = a - b;
    // a = a - b;

    //方法二
    a = a ^ b;  //a = 3 ^ 5
    b = a ^ b;  //b = 3 ^ 5 ^ 5 = 3
    a = a ^ b;  //a = 3 ^ 5 ^ 3 = 5

    printf("交换后: a=%d b=%d\n", a, b);

    // 3 ^ 3 = 0
    // 0 ^ 5 = 0
    // 3 ^ 3 ^ 5 = 5
    // 3 ^ 5 ^ 3 = 5
    // 异或操作符支持交换律

    return 0;
}