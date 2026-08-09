// find max of 2 numbers using function+ pointer
#include <stdio.h>
void findMax(int *, int *, int *);
void findMax(int *a, int *b, int *Max)
{
    if (*a > *b)
    {
        *Max = *a;
        printf("a is greater which is %d\n", a);
    }
    else
    {
        *Max = *b;
        printf("b is greater which is %d\n", b);
    }
}

int main()
{
    int x = 33;
    int y = 45;
    int M;

    findMax(&x, &y, &M);
    printf(" Max = %d\n", M);

    return 0;
}