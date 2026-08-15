// program to print whether a student has passed or fail..
// to pass need total 40 and atleast 33 in each subject ...3 subjects ..

#include <stdio.h>
int main()
{
    int marks1 = 34;
    int marks2 = 57;
    int marks3 = 32;

    printf(" marks in subject1 are %d\n", marks1);
    printf(" marks in subject2 are %d\n", marks2);
    printf(" marks in subject3 are %d\n", marks3);
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are FAILED due to less less marks in individual subject(s)\n");
    }
    else if(((marks1 + marks2 + marks3) / 3) < 40)
    {
        printf("You are FAILED due to less percentage\n");
    }
    else if (((marks1 >= 33 || marks2 >= 33 || marks3 >= 33) && ((marks1 + marks2 + marks3) / 3) > 40))
    {
        printf("You are PASSED\n");
    }

    return 0;
}