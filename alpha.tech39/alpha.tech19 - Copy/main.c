#include <stdio.h>
#include <stdlib.h>
//*  finding max and min between three numbers by using nested if.....else statement *//

int main()
{
    int a,b,c;
    printf("enter the value of num1 :");
    scanf("%d",&a);
    printf("enter the value of num2 :");
    scanf("%d",&b);
    printf("enter the value of num3 :");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
           {

            printf("maximum number = %d\n",a);
            printf("minimum number =%d\n",c);
           }
    else
    {
    printf("minimum number =%d\n",a);
    printf(" maximum number =%d\n",c);
}
    }
    else
    {
        if (b>c)
       {

            printf("maximum number =%d\n",b);
        printf("minimum number =%d\n",c);
    }
    else
  {
    printf("minimum number=%d\n",b);
    printf("maximum number =%d\n",c);
    }
    }
    return 0;
}
