//structure for storing information of students
#include<stdio.h>
#include<string.h>
struct A{
    char name[10];
    int roll_no;
    int prn;
    char address[10];
    float result;
};
int main(){
    struct A p = {"payal",13,013,"satara",90.0};
    struct A g = {"gauri",14,014,"pune",91.0};
    printf("%s\n%d\n%d\n%s\n%f\n",p.name,p.roll_no,p.prn,p.address,p.result);
    printf("%s\n%d\n%d\n%s\n%f\n",g.name,g.roll_no,g.prn,g.address,g.result);
return 0;

}