// strlen- length of a string
/*#include <stdio.h>
#include <string.h>
int main(){
char st[] = "Harry";
printf("%d",strlen(st));
    return 0;
}*/



// strcpy function- used to copy the content of second string into first string passed through it.
/*#include <stdio.h>
#include <string.h>
int main (){
    char source[] = "Harry";
    char target[30];
    strcpy(target,source);
    printf("%s %s",source, target);
    return 0;
}*/



// strcat function- used to concatenate two strings.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Harry";
    char target[30];
    strcat(target, source);
    printf("%s %s", source, target);
    return 0;
}*/



// strcmp function-function is used to compare two strings .
// It returns 0 if strings are equal . A negative value ,
// if the first strings mismatching characters ASCII value is less than the
// second strings corresponding mismatching character. and a positive value otherwise

//strcmp function....
#include <stdio.h>
#include <string.h>
int main()
{
   // char source[] = "Harry";
   // char target[30];
    int a = strcmp("far","joke");
    
    printf("%d",a);
    return 0;
}
//sujal321