#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int k = 7;
    int i = 0;
    //计算数组的长度
    int sz = sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<sz;i++)
    {
        if (k == arr[i])
        {
            printf("找到了，下标是：%d\n",i);
            break;
        }
    }
    if (i == sz)
    {
        printf("找不到\n");
    }
    
    return 0;
}