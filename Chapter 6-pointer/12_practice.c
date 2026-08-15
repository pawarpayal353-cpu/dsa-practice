//pointer
#include<stdio.h>
int main(){
    int a = 6;
    int b = 76;
    int *x = &a;
    int *y = &b;
    int **p = &x;
    int **q = &y;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",*x);
    printf("%d\n",*y);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",**p);
    printf("%d\n",**q);


    return 0;

}