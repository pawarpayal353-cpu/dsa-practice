// To create a structure for storing date, and a function to compare those dates
 #include <stdio.h>
struct date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct date d1, struct date d2)
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
    struct date d1 = {5, 11, 2007};
    struct date d2 = {18, 9, 2006};
    printf("%d", compare(d1, d2));

    return 0;
}