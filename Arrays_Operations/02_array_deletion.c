#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int array_del(int arr[], int index, int size, int capacity)
{
    if (size > capacity)
    {
        return 0;
    }
    for (int i = index; i < size; i++) // the loop run upto size-1 cuz the array index starts from 0 and goes up to size -1
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++) // 0,1,2,3,4...size -1
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int index = 0;
    int size = sizeof(arr) / sizeof(int);
    display(arr,size);
    int capacity = 100;
    int check = array_del(arr, index, size, capacity);
    if (check == 1)
    {
        size = size - 1; // cuz we ar poping a variable from an array so the size is reduced by 1 .
        printf("The deletion was successfull\n");
        display(arr, size);
    }
    else
    {
        printf("The Deletion was unsuccessful\n");
    }
    return 0;
}