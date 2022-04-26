// ADTs are basically creating custom datatypes in c.
// in this program be create a custom array and store it dynamicamical in heap memory and add values to it and print them
// using void createArr(),void setValue(),void printArr();
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct newArr // initialized structure to create custom variable
{
    int total_space;
    int used_space;
    int *ptr;
};
void createArr(struct newArr *a, int tsize, int usize)
{
    a->total_space = tsize;                      // 10
    a->used_space = usize;                       // 2
    a->ptr = (int *)malloc(usize * sizeof(int)); // created an array in heap memory using malloc a->ptr is our array
}
void setValue(struct newArr *a)
{
    int n;
    for (int i = 0; i < a->used_space; i++) // 2 times
    {
        printf("Enter %d value", i);
        scanf("%d", &n); // store 2 values at 0 1 positions
        (a->ptr)[i] = n;
    }
}
void printArr(struct newArr *a)
{
    for (int i = 0; i < a->used_space; i++) // 2 times
    {
        printf("%d\n", (a->ptr)[i]);
        // store 2 values at 0 1 positions
    }
}
int main()
{
    struct newArr marks;
    createArr(&marks, 10, 2);
    printf("We are running setVal now\n");
    setValue(&marks);

    printf("We are running show now\n");
    printArr(&marks);
    return 0;
}