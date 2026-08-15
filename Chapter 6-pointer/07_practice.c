// Count vowel in a string using pointer
#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *p = &str;
    int count = 0;

    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            count++;
            ;
        }
        p++;
    }
    printf("vowels = %d\n", count);
    return 0;
}
