#include <stdio.h>
#include <stdlib.h>

//finding whether the given year is leap year or not*//

int main()
{
    int year;
    printf("enter a year :");
    scanf("%d",&year);

     if (year%400==0)
        printf("%d is a leap year!\n",year);
     else if (year%100==0)
        printf("%d is not a leap year!\n",year);
     else if (year%4==0)
     printf("%d is a leap year!\n",year);
     else
        printf("%d is not a leap year!\n",year);

    return 0;
}
