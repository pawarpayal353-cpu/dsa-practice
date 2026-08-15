// use of nested for loop for printing table  
#include<stdio.h>
int main(){
    int num;
    printf("enter a no :");
    scanf("%d",&num);
    for ( int j = 1; j < 11; j++)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d is %d\n",j,i,j*i);
        }
        
    }
    
    return 0;
}