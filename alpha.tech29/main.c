#include <stdio.h>
#include <stdlib.h>

//*to find unique clock representation by using if statement..*//

int main()
{
   int totalseconds;
   int hours,minutes,remainingseconds;
   printf("enter the total second :");
   scanf("%d",&totalseconds);

   hours =totalseconds/3600;
   minutes =(totalseconds-hours*3600)/60;
   remainingseconds = (totalseconds-hours*3600)%60;

   if (hours<10)
    printf("0");
   printf("%d :",hours);
   if (minutes<10)
    printf("0");
    printf("%d :",minutes);
    if (remainingseconds<0)
        printf("0");
        printf("%d ",remainingseconds);


    return 0;
}
