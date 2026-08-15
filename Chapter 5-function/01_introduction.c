/*FUNCTION PROTOTYPE = informs the compiler about a function that
 will be defined later in the program
FUNCTION DEFINITION = contains the exact set of instructions executed 
during the function call 
FUNCTIION CALL = instructs the compiler to execute the functions body
when the call is made
 */
#include <stdio.h>
int sum(int,int);       // function prototype

int sum(int x , int y){ // function definition
    printf("the sum is %d\n",x + y);
    return x + y;

}


int main(){
    int a = 6;
    int b = 7;
    sum(a,b);           // function call
    int c = 9;
    int d = 8;
    sum(c,d);
    
    
    return 0;
}