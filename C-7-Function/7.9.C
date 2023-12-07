#include <stdio.h>
//每一次调用Add num都会加一
void Add(int* p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    Add(&num);
    printf("%d\n",num);
    Add(&num);
    printf("%d\n",num);
    Add(&num);
    printf("%d\n",num);
    return 0;
}