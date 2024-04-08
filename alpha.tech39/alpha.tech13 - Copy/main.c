#include<stdio.h>
#include<stdlib.h>
int main()

//1+3+5=9
{
    int num;
    int hundreds,units,tens;
    printf("enter the 3-digit number :");
    scanf("%d",&num);
    units =num%10;
    tens =(num/10)%10;
    hundreds =num/100;
    printf("the sum of 3-digits numbers in %d= %d\n",num,units+tens+hundreds);
    return 0;
}
