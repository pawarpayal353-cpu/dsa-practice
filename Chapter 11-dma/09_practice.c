// To solve Q7 by calloc()
#include<stdio.h>
 #include<stdlib.h>
 int main (){
    int n = 5;
    int*ptr;
    ptr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("The array is %d\n");
    }
    n = 10;
    ptr = (int*)realloc(ptr,10* sizeof(int));
    for (int i = 0; i < 11; i++)
    {
        printf("The array is %d\n");
    }

    return 0 ;
 }