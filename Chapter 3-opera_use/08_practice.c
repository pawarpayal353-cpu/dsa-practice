//multiplictaion table of any number
#include<stdio.h>
int main (){
    int num;
    printf(" enter a no");
    scanf("%d",&num);
    for ( int i = 1; i < 11; i++)
    {
        printf(" %d x %d = %d\n",num,i,num*i);
    }
    

    return 0;
}