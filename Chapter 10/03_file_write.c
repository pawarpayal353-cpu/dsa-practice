#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("payal.txt", "w");
    int num = 2007;
    fprintf(fptr, "%d",num);
    printf("The value of num is %d\n",num);
    fclose(fptr);
    return 0;
}