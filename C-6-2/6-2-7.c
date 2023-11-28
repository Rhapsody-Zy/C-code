#include <stdio.h>
int main()
{
    //1-10
    int i = 1;
    do
    {
        if (i == 5)
            continue;
        printf("%d ", i);
        i++;
        
    }
    while (i<=10);
    return 0;
}