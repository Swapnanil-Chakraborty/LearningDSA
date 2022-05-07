#include <stdio.h>
#include <stdlib.h>
int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int key;
    int arr[] = {31, 43, 21, 44, 93, 87, 71, 64, 79, 47};
    int size = sizeof(arr) / sizeof(int);
    printf("Enter The Element : ");
    scanf("%d", &key);
    int check = linearSearch(arr, size, key);
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