//year is a leap year or not
#include <stdio.h>
int main(){
    int year = 2026;
    printf(" year is %d\n",year);
    if (year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
        printf("Year is a leap year\n",year);
    }else {
        printf("Year is not a leap year\n",year);
    }
    

    return 0;
}