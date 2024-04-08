#include <stdio.h>
#include <stdlib.h>

//*finding min and max by using ternary(conditional) operators*//

int main()
{
    int num1,num2,min,max;
    printf("enter the value of num1 :");
    scanf("%d",&num1);
    printf("enter the value of num2 :");
    scanf("%d",&num2);
    min =(num1>num2)?num2:num1;
    printf("minimum value =%d\n",min);
    max =(num1>num2)?num1:num2;
    printf("maximum value =%d\n",max);

    return 0;
}
