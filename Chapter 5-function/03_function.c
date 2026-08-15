// program using function to find average of three numbers
#include <stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c)
{
    return ((a + b + c) / 3.0);
}

int main()
{

    int a = 8, b = 3, c = 6;
    printf("The average of three numbers is %f", average(a, b, c));

    return 0;
}