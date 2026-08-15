// register for 10 students
#include<stdio.h>
#include<string.h>
struct R{
    char name[10];
    char address[10];
    int roll_no;
    int prn;
    float result;
};
int main(){
    struct R r[10];
    
    for (int i = 1; i < 11; i++)
    {
        printf("Enter name,address,roll_no,prn,result:");
        scanf("%c\n %c\n %d\n %d\n %.2f\n",&r[i].name,&r[i].address,&r[i].roll_no,&r[i].prn,&r[i].result);

    }
    for (int i = 1; i < 11; i++)
    {
        printf("%c\n %c\n %d\n %d\n %.2f\n",r[i].name,r[i].address,r[i].roll_no,r[i].prn,r[i].result);

    }
    
return 0;

}