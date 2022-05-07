// in this program we learn different ways to create and initilize an array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int arr[100]; //output is garbage.
    // int arr[100] = {0}; //the first element is zero and rest are zero too.
    // int arr[100] = {1,2,3}; //the first 3 elements are 1,2,3 then rest is zero upto 100.
    int arr[] = {1, 2, 3}; // output 1,2,3.
    int length = 3;        // update the length as seen fit.
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}