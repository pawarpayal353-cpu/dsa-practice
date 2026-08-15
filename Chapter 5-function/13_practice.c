//with p with rt .... finding cube adding two no 
#include<stdio.h>
int cube();
int cube(){
    int num;
    int cube = 1;
    printf("Enter a number :");
    scanf("%d",&num);
    for (int i = 1; i = num; i++)
    {
        cube = cube*i*i;
    }return cube;
    
} int main(){
    int result;
    result = cube();
    printf("The cube is %d",result);
    return 0;
} 