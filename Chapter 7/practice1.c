// program to take input from user using %c and %s confirm that the strings are equal
/*#include <stdio.h>
#include <string.h>
int main(){
    char str[6];
    scanf("%s",str);
    printf("%s",str);
    return 0;
}*/



#include <stdio.h>
//#include <string.h>
int main(){
    int j = 0;
    char str[6];
    for(int j = 0; j < 5; j++);
    {
        scanf("%c",&str[j]);
        fflush(stdin);
        printf("%c",str[j]);
    }
    str[5] = '\0';
    return 0;
}