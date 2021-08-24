#include <stdio.h>

void quick(int *, int, int);

void quick(int *arr, int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot;

    pivot = arr[(left+right)/2];

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i<=j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left<j)
    {
        quick(arr, left, j);
    }

    if (i<right)
    {
        quick(arr, i, right);
    }

}

int main (void)
{
    int arr[] = {73, 108, 111, 118,101, 70, 105, 115, 104, 67, 46, 99,111,109};
    int i, length;

    length = sizeof(arr)/sizeof(arr[0]);
    quick(arr, 0, length-1);

    printf ("排序后的结果是：");
    for (i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }

    putchar('\n');

    return 0;
}