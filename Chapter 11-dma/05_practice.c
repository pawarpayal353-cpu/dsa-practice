// create an array if size 6 capable of storing 6 integers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 45;
    printf("%d\n",ptr[0]);

   
    return 0;
}

/*
 ptr[0] = 1;
    ptr[1] = 12;
    ptr[2] = 14;
    ptr[3] = 15;
    ptr[4] = 45;
    ptr[5] = 85;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);
*/