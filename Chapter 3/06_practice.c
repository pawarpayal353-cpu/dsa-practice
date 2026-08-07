//character is lower case or not 
//ASCII value - corresponding value
#include<stdio.h>
int main(){
    char ch = 'a';
    printf("The character is %c\n",ch);
     printf("The value of character is %d\n",ch);
    if (ch>=97 && ch<=122)
    {
        printf("Character is lower case\n");
    }else
    {
        printf("Character is not lowercase\n");
    }
    
    
    return 0;


}