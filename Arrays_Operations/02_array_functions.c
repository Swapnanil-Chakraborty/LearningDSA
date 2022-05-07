//in this program we learn that arrays are passed by reference i.e as an pointer
#include <stdio.h>
#include <stdlib.h>
// void printArr(int arr[], int length)
void printArr(int *arr, int length) // we can call pass arr
{
    printf("The Size Of Arr inside function = %d\n", sizeof(arr)); //size = 8 because it is a pointer
    arr[0] = 71; // update arr pointer. this should change the value in main too.
    for (int i = 0; i < length; i++)
    {
        printf("Value : %d\n", arr[i]);
    }
}
int main()
{
    int arr[] = {44, 32, 55, 12, 82, 73, 96, 103}; //size = 32 because arr 
    int length = sizeof(arr) / sizeof(int);
    printArr(arr, length);
    printf("The Size of Arr inside main = %d\n", sizeof(arr));
    for (int i = 0; i < length; i++)
    {
        printf("Value : %d\n", arr[i]);
    }
    return 0;
}
// The Size Of Arr in main and Func is not same Because inside the Func() the arr passed by reference so a pointer is passed which has the address of arr in MAIN. 