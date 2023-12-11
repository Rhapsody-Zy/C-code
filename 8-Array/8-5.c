#include <stdio.h>
int main()
{
    int arr[3][4] = {{1,2,3},4,5};    
    int i = 0;
    for (i=0;i<3;i++)
    {
        int j = 0;
        for (j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // 1 2 3 0 
    // 4 5 0 0 
    // 0 0 0 0 
    return 0;
}