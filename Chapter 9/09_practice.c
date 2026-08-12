//solving 08_practice.c by using typedef...
#include <stdio.h>
typedef struct date
{
    int mm;
    int dd;
    int yyyy;
}DT;
int compare(DT d1, DT d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
        
    {
      return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return -1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return 0;
    }
     else if (d1.mm > d2.mm){
        return -1;
    }
    else if (d1.mm < d2.mm){
        return 0;
    }
    else if (d1.dd > d2.dd){
        return -1;
    }
    else if (d1.dd < d2.dd){
        return 0;
    }
}
int main()
{
    DT d1 = {5, 11, 2007};
    DT d2 = {18, 9, 2006};
    printf("%d", compare(d1, d2));

    return 0;
}