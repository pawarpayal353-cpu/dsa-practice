// take a number print Divisible by 3 or 5 if number is divisible by 3 OR 5
#include <stdio.h>
int main()
{
    int a = 435;
    printf("The number is %d\n ", a);

    if (a % 3 == 0 || a % 5 == 0)
    {
        printf("Divisible by 3 or 5\n");
    }
    else
    {
        printf("not Divisible by 3 or 5\n ");
    }
    return 0;
}