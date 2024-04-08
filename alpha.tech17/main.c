#include <stdio.h>
#include <stdlib.h>
//*finding max and min between two numbers*//

int main()
{
    float num1,num2;
    printf("enter the value of num1 :");
    scanf("%f",&num1);
    printf("enter the value of num2 :");
    scanf("%f",&num2);

    if (num1>num2)
    {
    printf("maximum =%.1f\n",num1);
    printf("minimum =%.1f\n",num2);
    }
    else
{
    printf("maximum =%.1f\n",num2);
    printf("minimum =%.1f\n",num1);
}

    return 0;
}
