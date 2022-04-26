#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int inArrElement(int arr[], int size, int element, int index, int capacity) // int fuc() to insertElement
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--) // traversing the array from the end to the index and stop after space is added in the index
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element; // Remember that array is passed by reference so the arr is updated in main too
    return 1;
}

int main()
{
    // CAPACITY is the array element capacity,SIZE is the number of element occupied in the array
    // ELEMENT is the element to add at the INDEX in the array.
    int capacity = 100, size = 5, element = 4, index = 3;
    int arr[100] = {1, 2, 3, 41, 441};

    int check = inArrElement(arr, size, element, index, capacity); // check if element was added
    if (check == 1)
    {
        printf("The Element is inserted succesfully:- at %d index \n", index);
        size = size + 1;
        display(arr, size);
    }
    else // else will hit when the SIZE is greater than the CAPACITY of the array
    {
        printf("Element was not inserted :( ");
    }
    return 0;
}