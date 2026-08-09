//take an input x = 50 print value , address, value using pointer 
#include <stdio.h>
int main(){
    int x = 50;
    int*ptr = &x;
    
    printf("The value of x is %d\n",x);
    printf("The address of x is %d\n",&x);
    printf("The value of x is %d\n",*ptr);
    return 0;
}