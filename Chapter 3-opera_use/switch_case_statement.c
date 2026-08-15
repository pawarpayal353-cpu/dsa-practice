/*
SYNTAX
switch (expression)
{
    case1:
        // code to run if expression == case 1
    break;
    case2:
        // code to run if expression == case 2
    break;
    case3:
        // code to run if expression == case 3
    break;
    case4:
        // code to run if expression == case 4
    break;
    default:
        //code to run if expression does not match any case
    break;//not compulsary or not necessary

}
*/

#include <stdio.h>
int main()
{
    int a = 5678;
    printf("The value of a is %d\n", a);
    switch (a == 5677)
    {
    case1:
        // code to run if expression == case 1
        printf("a is equal to 5677\n");
        break;
    case2:
        // code to run if expression == case 2
        printf("a is not equal to 5677\n");
        break;

    default:
        // code to run if expression does not match any case
        printf("this will never run\n");
        break; // not compulsary or not necessary
    }

    return 0;
}
