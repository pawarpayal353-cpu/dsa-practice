#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("payal.txt","r");
    char c = fgets(ptr);
    printf("%c",c);
    return 0;
}