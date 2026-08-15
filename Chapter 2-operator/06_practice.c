// find out which number is greater among two numbers
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter any two numbers");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a is greater", a);
    }
    else
    {
        printf("b is greater", b);
    }
    return 0;
}