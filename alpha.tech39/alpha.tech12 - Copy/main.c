#include<stdio.h>
#include<stdlib.h>
int main()
{
    float data;
    printf("enter the value of floating data type :");
    scanf("%f",&data);
    printf("enter the integer value =%d\n",(int)data);
    printf("enter the decimal value =%.2f\n",data-(int)data);
    return 0;

}
