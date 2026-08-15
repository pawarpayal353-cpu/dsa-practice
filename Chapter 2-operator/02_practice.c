// To check whether a number is divisible by 97 or not 
#include<stdio.h>
int main(){
    int a = 25789;
    int b = 3349895;
    printf("The value of b%97 is %d\n",b%97);// if it is divisible then it will retuen 0
    printf("The value of a%97 is %d\n",a%97);// if it is not divisible then it will return a value
    return 0;
}