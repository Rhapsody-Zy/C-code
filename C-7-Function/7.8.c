#include <stdio.h>
//二分查找
                     //本质上这个arr是个指针
int binary_search(int arr[],int k,int sz)
{
    //int sz = sizeof(arr)/sizeof(arr[0]);      //通过传参进入函数的数组，不能通过这个方法进行计算元素个数
    int left = 0;
    int right = sz-1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
                            //此时下面这个arr为数组arr首元素的地址
    int ret = binary_search(arr, k, sz);
    if (ret = -1)
        printf("没找到");
    else
        printf("找到了，下标为:%d\n",ret);
    return 0;
}