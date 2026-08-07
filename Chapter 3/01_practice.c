//  print eligible if age>=18 AND marks >=75

#include <stdio.h>
int main()
{
    int age = 19;
    int marks = 85;

    printf("Age is %d\n", age);

    printf("marks are %d\n", marks);

    if (age >= 18 && marks >= 75)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}
