// no p with rt.... multiplicstion of two no
#include<stdio.h>
int multiplication();

int multiplication(){

    int a,b;
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
  int multiply = a*b;
    return multiply;

}
int main(){
    int result;
    result =multiplication();
    printf("The result is %d",result);

    return 0;
}
