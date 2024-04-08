#include<stdio.h>
#include<stdlib.h>
int main()

{

    float a,d,an,sn;
    int n;
    printf("enter the first number in arithmetic sequences :");
    scanf("%f",&a);
    printf("enter the difference in arithmetic sequences :");
    scanf("%f",&d);
    printf("enter the total numbers in arithmetic sequences :");
    scanf("%d",&n);
    an=a+(n-1)*d;
    printf("the n-th term of arithmetic operation = %f\n",an);
    sn=(a+an)*n/2;
    printf("the sum of all terms in arithmetic operation =%f\n",sn);

    return 0;



}
