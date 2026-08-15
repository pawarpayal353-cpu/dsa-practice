//no p with rt ... factorial and multiplying two no

/*
// factorial of number using while loop 
#include <stdio.h>
int main(){
    int num;
    int fact =1;
    printf("Enter a number :");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        
        fact = fact*i;

    }
    printf("%d",fact);        

    
    return 0;
}*/

#include<stdio.h>
int factorial();

int factorial(){

    int num;
    int fact =1;
    printf("Enter a number");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        
        fact = fact*i;

    }
    return fact;

}
int main(){
    int result;
    result =factorial();
    printf("The factorial is %d",result);

    return 0;
}
