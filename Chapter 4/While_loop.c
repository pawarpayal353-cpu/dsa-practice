// while (condition is true){
// code
// the block keeps executing as long as the condition is true

//}
#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 4)
    {
        printf("Happy Birthday\n", i++);
    }
    return 0;
}