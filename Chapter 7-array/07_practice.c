// array of 10 integers and store multiplication table of 5 in it
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 1; i < 11; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int j = 1; j < 11; j++)
    {
        printf("The value of 5 x %d = %d\n", i+1, arr[i][j]);
    }
    return 0;
}