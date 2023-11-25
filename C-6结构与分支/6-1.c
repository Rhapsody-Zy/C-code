#include <stdio.h>
int main()
{
    int age = 11;
    if(age<18) {
        printf("未成年\n");
        printf("不能谈恋爱\n");
    }
    else if  (age>=18 && age<28)
        printf("青年\n");
    else
        printf("壮年\n");
    return 0;
}