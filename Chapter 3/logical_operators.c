// used to provide logic to our statement
/*      &&    AND - 1 and 1 is evaluated as true
        ||    OR - 0 and 0 is evaluated as false
        !     NOT - revrses the output*/

#include <stdio.h>
int main()
{
    int a = 1;
    int b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of  not(b) is %d\n", !b);

    return 0;
}
