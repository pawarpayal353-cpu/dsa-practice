#include <stdio.h>
int sum(int*, int*);
int sum(int*x, int*y)
{
    return( *x + *y );
}
int main()
{
    int a = 4;
    int b = 7;
    sum(&a, &b);
    printf("the sum is %d\n", sum( &a, &b));

    return 0;
}