#include<stdio.h>
#include<stdlib.h>
 int main()

 {
     float salary;
     int totalhours;
     printf("enter your salary per hour :");
     scanf("%f",&salary);
     printf("enter the number of hours you work in last month");
     scanf("%d",&totalhours);
     printf("salary per month =%f\n",salary*totalhours);
     return 0;


 }
