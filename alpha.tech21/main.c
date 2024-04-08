#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// finding the difference between  three number by using logical operator*\\

int main()
{
    int a=20 ,b=10 ,c=45;
    printf("logical and =%d\n",(a>b)&&(b<c));
    printf("logical or =%d\n",(a<=b)||(b<c));
    printf("logical not =%d\n",(!(a>b)));

    return 0;
}
