#include <stdio.h>

// structure capable of storing date and function to compare those dates
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} sd;

int compare(sd d1, sd d2);

int main()
{
    sd d1 = {11, 05, 2006};
    sd d2 = {27, 12, 2003};
    printf("%d\n", compare(d1, d2));
    return 0;
}

int compare(sd d1, sd d2)
{
    // if d1 is in the future, return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    return 0;
}
