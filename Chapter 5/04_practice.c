// swap 2 numbers take a = 10 , b = 20 write a function swap(int*pnint*q)to swap them
#include <stdio.h>
void swap(int *, int *);
void swap(int *p, int *q)
{
}
int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", &a);
    printf("The value of b is %d\n", b);
    printf("The value of b is %d\n", &b);
    return 0;
}
