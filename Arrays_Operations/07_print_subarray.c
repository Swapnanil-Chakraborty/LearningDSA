// this is a program to print all sub array possible and their sum too. Also Print Greatest Sub Array Sum;
// coding minutes lecture 16.it is an example of bruteforce approach where we check all possible values.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printSubArr(int *arr, int n)
{
    int sum = 0, greatest = 0;
    for (int i = 0; i < n; i++) // starting  =i;
    {
        for (int j = i; j < n; j++) // ending point = j;
        {
            for (int k = i; k <= j; k++) // printing from starting point to ending point
            {
                printf("(%d),", arr[k]);
                sum += arr[k];
            }
            printf("\tSum = %d", sum);
            if (sum >= greatest)
            {
                greatest = sum;
            }
            sum = 0;
            printf("\n");
        }
    }
    printf("\nThe Greatest SubArray is %d", greatest);
}
int main()
{ // 0 ,1 ,2 ,3 ,4 ,5
    int arr[] = {
        -2,
        3,
        4,
        -1,
        5,
        -12,
        6,
        -1,
        2,
        3,
    };
    int n = sizeof(arr) / sizeof(int);
    printSubArr(arr, n);
    return 0;
}