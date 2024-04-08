#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int seconds,hours,minutes;
     float remainingseconds;
     printf("enter the total no of seconds");
     scanf("%d",&seconds);
     hours=seconds/3600;
     minutes=(seconds-hours)/60;
     remainingseconds=seconds%60;
     printf("total hours =%d\n",hours);
     printf("total minutes =%d\n",minutes);
     printf("the remaining seconds =%f\n",remainingseconds);
     return 0;
 }
