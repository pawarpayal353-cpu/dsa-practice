//write a function 'sumVector'which returnd the sum of two vectors passed through it
#include <stdio.h>
#include<string.h>
   
   typedef struct vector{//use of typedef
        int i;
        int j;


    } v;//works same like struct vector 
    v sumVector(v v1 ,v v2){
       v v3 = {v1.i + v2.i, v1.j + v2.j};
        return v3;
    }
    int main(){
       v v1 = {1,2};
       v v2 = {5,6};
       v v3 = sumVector (v1,v2);
        printf("The value of vector v3  is %di + %dj",v3.i,v3.j);
        return 0;
    }