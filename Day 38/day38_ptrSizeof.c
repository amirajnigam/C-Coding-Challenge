#include <stdio.h>

int main()
{
    void *ptr;
    int arr[] = {1,2,3,4,5};
    int arr_elements = sizeof(arr)/sizeof(arr[0]);
    ptr = &arr;
    for(int i = 0;i<arr_elements;i++)
    {
        printf("%d\n",*(int*)&*(int*)ptr++);
    }
    return 0;
}
