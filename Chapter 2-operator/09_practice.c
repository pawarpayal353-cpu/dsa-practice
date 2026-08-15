// SWITCH CASE STATEMENT
#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter values:");
    scanf("%d %d", &a, &b);
    printf("enter choice 1 = addition,2 = difference , 3 = multiplication , 4 = division ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("%d", a + b);
        scanf("%d", &choice);
    case 2:
        printf("%d", a - b);
        scanf("%d", &choice);
    case 3:
        printf("%d", a * b);
        scanf("%d", &choice);
    case 4:
        printf("%d", a / b);
        scanf("%d", &choice);
    default:
        printf("Nothing entered");
    }
    return 0;
}