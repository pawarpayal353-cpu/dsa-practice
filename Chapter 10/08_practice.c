// write name and salary of two employees in the format name1,3300.. name2,6788...
#include <stdio.h>
int main()
{
    FILE *ptr;
    char name1[12] = 'P';
    char name2[12] = 'G';
    int salary1 = 6565;
    int salary2 = 6866;
    ptr = fopen("payal.txt", "w");
    printf("name is employee is %c and salary is %d\n", name1, salary1);
    printf("name is employee is %c and salary is %d\n", name2, salary2);

    return 0;
}