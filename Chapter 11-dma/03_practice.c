// program to create an array of size 4 using calloc()
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;

    ptr = (int *)calloc(4, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 12;
    ptr[2] = 14;
    ptr[3] = 15;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);

    return 0;
}