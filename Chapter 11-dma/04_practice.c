// usage of FREE() with malloc
#include <stdio.h>
#include<stdlib.h>
int main(){
    int n ;
    int*ptr;
    scanf("%d",&n);
    //int arr[n];// not allowed in c
    ptr = (int*)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 4;
    free(ptr);
    printf("%d",ptr[0]);
    return 0;
}