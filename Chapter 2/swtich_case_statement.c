// SWITCH CASE STATEMENT
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    switch (a)
    {
    case1:
        printf("You entered 1\n");
        break;
    case2:
        printf("You entered 2\n");
        break;
    case3:
        printf("You entered 3\n");
        break;
    case4:
        printf("You entered 4\n");
        break;
    default:
        printf("Nothing Matched");
    }
    return 0;
}