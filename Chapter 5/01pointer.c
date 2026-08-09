#include <stdio.h>
int main(){
    int a = 6;
    int*b = &a;
    printf("The addrress of a is %d\n",a);
    printf("The address of a is %u\n",&a);
    return 0;
}