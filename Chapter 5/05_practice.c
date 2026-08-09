#include <stdio.h>
int main (){
int a = 100;
int*p= &a;
*p = *p + 10;
printf("%d",a);
return 0;
}