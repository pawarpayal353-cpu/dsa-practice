// POINTER ARITHMETICS
//A pointer can be used to point to the next memory location of the same type
#include <stdio.h>
int main()
{
    // int a = 'A';
    // int *b = &a;
    // b++;
    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of *b is %p\n", *b);
    // printf("The value of &a is %d\n", &a);
    // return 0;

    //    char a ='A';
    //    int *b = &a;
    //    b++;
    // printf("The value of a is %c\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of *b is %p\n", *b);
    // printf("The value of &a is %d\n", &a);
    // return 0;

    float a = 'A';
    int *b = &a;
    b++;
    printf("The value of a is %f\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of *b is %p\n", *b);
    printf("The value of &a is %d\n", &a);
    return 0;
}