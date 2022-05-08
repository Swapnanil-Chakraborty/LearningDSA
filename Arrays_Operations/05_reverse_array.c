#include <stdio.h>
#include <stdlib.h>
void reverse(int *arr, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int temp;
        temp = arr[start];
        // arr[start] = temp; this is wrong cuz we are changing the value of arr rather then of temp. no mistakes again. always read variable from right to left.
        arr[start] = arr[end];
        arr[end] = temp;
        start += 1;
        end -= 1;
    }
}
void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = (sizeof(arr) / sizeof(int));
    printf("Before Reverse :-\n");
    printArr(arr, size);
    printf("\nAfter Reverse :-\n");
    reverse(arr, size);
    printArr(arr, size);
    return 0;
}