//celcius to fahrenheit
#include<stdio.h>
float c2f (float);
float c2f (float c){
return (9/5)*c + 32;
}




int main(){
float c =  45;
printf("The vlaue of fahrenheit is %f",c2f(c));

    return 0;
}