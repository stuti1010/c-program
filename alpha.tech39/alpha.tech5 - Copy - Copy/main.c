#include<stdio.h>
#include<stdlib.h>
 int main()

 {
     int grade1,grade2,grade3;
     double average;
     printf(" enter grade1");
     scanf("%d",&grade1);
     printf(" enter grade2 ");
     scanf("%d",&grade2);
     printf(" enter grade3");
     scanf("%d",&grade3);
     average =(grade1+(double)grade2+grade3)/3;
     printf(" average = %.2lf\n",average);
     return 0;

 }
