#include<stdio.h>
#include<stdlib.h>
// finding the number is double-digit or triple-digit number by using logical operator*//
int main()
{
    int num;
    printf("enter the first number :");
    scanf("%d",&num);

    if (num>=10 && num<=99)
     printf("this is double-digit number\n");
    else if (num>=99 && num<=999)
        printf(" this is a triple digit number");
    else
        printf("neither this number is double-digit or triple -digit\n");
    return 0;

}
