// To create an array of multiplication table of 7 upto 10 .
// now use realloc to make it store till 15....
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    int i = 0;
    ptr = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("7*(i+1)\n");
    }
    n = 15;
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 16; i++)
    {
        printf("7*(i+1)\n");
    }

    return 0;
}