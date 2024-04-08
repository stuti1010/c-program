#include<stdio.h>
#include<stdlib.h>
int main()

 {
     int  speed,distance,time;

     printf("enter the speed of the car per hour :");
     scanf("%d",&speed);
     printf("enter the distance to be covered in km/hour:");
     scanf("%d",&distance);
     time=distance/speed;
     printf("the time taken in hours =%d",time);
     return 0;

 }
