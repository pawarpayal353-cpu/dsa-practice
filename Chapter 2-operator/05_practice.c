// check whether the given number is positive negative or zero
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("Given number is positive ", num);
    }
    else if (num <= 0)
    {
        printf("Given number is negative", num);
    }
    else if (num == 0)
    {
        printf("Given number is zero", num);
    }

    return 0;
}