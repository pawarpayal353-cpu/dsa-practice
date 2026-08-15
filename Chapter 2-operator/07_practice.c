// take three numbers from user and compare them
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter any three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is greater", a);
    }
    else if (b > a && b > c)
    {
        printf("b is greater", b);
    }
    else if (c > a && c > b)
    {
        printf("c is greater", c);
    }

    return 0;
}