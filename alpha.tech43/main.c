#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float total_amount = 0.01;
    for (i=1;i<=30;i++)
    {
       printf("day %d : amount is %f\n",i,total_amount);
        total_amount =total_amount*2;

    }
    printf("the 31st day after 30 days is %f\n",total_amount);

    return 0;
}
