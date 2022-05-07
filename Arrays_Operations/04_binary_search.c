#include <stdio.h>
#include <stdlib.h>
int binarySearch(int *arr, int size, int key)
{
    int s = 0, e;
    e = size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int key;
    int arr[] = {31, 49, 53, 61, 79, 84, 97, 102, 314, 515, 752, 853, 945, 1334, 2426, 5443};
    int size = sizeof(arr) / sizeof(int);
    printf("Enter The Element : ");
    scanf("%d", &key);
    int check = binarySearch(arr, size, key);
    if (check != -1)
    {
        printf("We Found Element %d at %d index in the list", key, check);
    }
    else
    {
        printf("The Element Was Not Found");
    }
    return 0;
}