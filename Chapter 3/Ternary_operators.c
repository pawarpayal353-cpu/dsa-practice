/* SHORTHAND method to use ' if-else '.
"?" and ":" are called ternary operators
*/

#include<stdio.h>
int main(){
    //condition?expression-if-true:expression-if-false
    int a = 2323;
    int b = 5656;
    a>b?printf("a is greater\n",a) : printf("b is greater\n",b); 
    return 0;
}