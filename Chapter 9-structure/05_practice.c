// problem which represents a complex number
#include <stdio.h>
//complex numbers have some similar properties as vector...
typedef struct c
{
    int real;
    int imaginary;

} Complex;
int main()
{
    Complex c = {1, 2};
    printf("The value of Complex Number is %d + %di", c.real, c.imaginary);
    return 0;
}