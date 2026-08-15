//program to demonstrate use of arrow pointer operator in c
#include<stdio.h>
typedef struct emp{
    int salary;float score;
}Employee;
    int main(){

        Employee e1;
        Employee*ptr = &e1;
        ptr->salary = 8943;// can also be written as (*ptr).salary..... and (*ptr).score....
        ptr->score = 354.45;
        printf("The value of salary is %d and score is %.2f",ptr->salary,ptr->score);
        return 0 ;
    }