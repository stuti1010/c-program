#include <stdio.h>
#include <stdlib.h>
#define size 7

// creating the coolest weather workstation ever by using array*//

int main()
{
   float temperature[size];
   int i;
   float sum=0.0;
   float average_temp;
   int hotday=0,coolday=0;
   for (i=0;i<size;i++)
   {
     printf("enter the temperature at day%d: ",i+1);
       scanf("%f",&temperature[i]);
   }
   for(i=0;i<size;i++)
   {
       sum=sum+temperature[i];
       if (temperature[hotday]<temperature[i])
        hotday=i;
       continue;
       if(temperature[coolday]>temperature[i])
        coolday=i;
   }
   average_temp=sum/size;
   printf("the average temperature =%f\n",average_temp);
   printf("the hottest day of the week is %d\n",hotday+1);
   printf("the temperature on the hottest day is %f\n",temperature[hotday]);
   printf("the coolest day of the week is %d\n",coolday+1);
   printf("the temperature on the coldest day is %f\n",temperature[coolday]);

    return 0;
}
