// To create a dynamic array of 5 floats using malloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 3;
    ptr[1] = 7;
    ptr[2] = 77;
    ptr[3] = 27;
    ptr[4] = 76;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);
    
    return 0;
}