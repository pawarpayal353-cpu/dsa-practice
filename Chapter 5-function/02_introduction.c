/*
program with 3 functions
good morning function prints 'good morning'
good afternoon function prints ' good afternoon'
good night function prints ' good night'
main () should call all of these in order 1->2->3

*/

#include <stdio.h>
    void good_morning();
    void good_afternoon();
    void good_night();

    void good_morning(){
        printf("good morning\n");
    
    }
    void good_afternoon(){
        printf("good afternoon\n");
    }
    void good_night(){
        printf("good night\n");
    }



int main(){
good_morning();
good_afternoon();
good_night();



    return 0;
}



/*
c program can have more than one function
1. library function
2. user defined function
PARAMETERS = values or variable place holders in function definition
ARGUMENTS = actual value passed to function to make a call
- if the passed variable is changed inside the function, the function 
call does not change the value in the calling function


*/ 