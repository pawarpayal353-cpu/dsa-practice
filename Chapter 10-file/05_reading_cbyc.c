//reading character by character
#include <stdio.h>
int main(){

char ch;
FILE *ptr;
ptr = fopen("payal.txt","r");
while(1){
    ch = fgets(ptr); // when all the content of a file has been read break the loop!
    printf("%c",ch);
    if (ch == EOF){
    break;
    }
    //code
}
    return 0;
}