// with p without rt....subtrsacting two no
#include <stdio.h>
void difference(int x, int y);
// int main(){
//     int x, y;
//     printf("Enter two no:",x,y);
//     scanf("%d%d", &x, &y);
//     difference(x,y);
// }
void difference(int a, int b)
{
    int dif;
    dif = a - b;
    printf("The difference is %d:",dif);
    return;
}
int main(){
    int x, y;
    printf("Enter two no:",x,y);
    scanf("%d%d", &x, &y);
    difference(x,y);
}
