// program to read three integers
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    int num1, num2, num3;
    fscantf(fptr, "%d %d %d", &num1, &num2, &num3);
    fprintf("The values are %d %d %d\n", num1, num2, num3);

    fclose(fptr);

    return 0;
}