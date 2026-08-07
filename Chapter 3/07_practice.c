// program to find greatest of four numbers
#include <stdio.h>
int main()
{
    int a = 34;
    int b = 56;
    int c = 2;
    int d = 57;
    if (a > b && a > c && a > d)

    {
        printf("a is greater \n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is greater \n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is greater \n");
    }
    else if (d > a && d > b && d > c)
    {
        printf("d is greater \n");
    }

    return 0;
}