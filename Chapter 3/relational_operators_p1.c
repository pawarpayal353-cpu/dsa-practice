/* used to evaluate conditions( true or false) inside if statement
== , >= , > , < , <= , !=
"=" is used for assignment
"==" is used for equality operator
NOTE- The condition can be any valid expression
NOTE- In C a non-zero value is considered to be true
*/

//  Check if it is equal to 50. print equal or not equal
#include <stdio.h>
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d", &a);
    if (a == 50)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}
