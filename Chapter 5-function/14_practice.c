// with p without rt....sum two no
#include <stdio.h>
void sum(int x, int y);
int main()
{
    int x, y;
    printf("Enter two no:", x, y);
    scanf("%d%d", &x, &y);
    sum(x, y);
}
void sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum is %d:", sum);
    return;
}
