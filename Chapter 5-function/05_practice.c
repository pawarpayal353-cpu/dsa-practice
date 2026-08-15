//To calculate force of attraction on a body of mass mexerted by earth consider g=9.8m/s*s
#include<stdio.h>
float force();
float force(){
    int mass;
    
return mass*9.8;
}
int main(){
    int mass = 45;
    printf("The value of force is %.2f\n",force(mass));
    return 0;
}




