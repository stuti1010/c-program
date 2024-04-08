#include <stdio.h>
#include <stdlib.h>

//entering a power to calculator by using for loop*//

int main()
{
    int num,pow;
    int i;
    int result =1;
    printf("enter the number :");
    scanf("%d",&num);
    printf("enter the power :");
    scanf("%d",&pow);

    for(i=0; i<pow; i++)
    {
     result = result*num;
    }
    printf("%d ^ %d =%d\n",num,pow,result);
    return 0;


}
