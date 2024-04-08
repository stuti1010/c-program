#include <stdio.h>
#include <stdlib.h>

int main()

// the number is 531
{
    int num;
    int units,tens,hundreds;
    int reversednumber;
    printf("enter the 3- digits number :");
    scanf("%d",&num);
    units = num %10;
    tens =(num/10)%10;
    hundreds=num/100;

    reversednumber = units;// 1
    reversednumber =(reversednumber*10)+3;// 13
    reversednumber =(reversednumber*10)+5;//130+5=135

    printf("the reversed number of %d =%d%d%d\n",num,units,tens,hundreds);
    printf("the reversed number of %d =%d\n",num,reversednumber);

    return 0;
}
