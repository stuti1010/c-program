#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,pow;
    int i;
    int result =1;
    printf("enter the number :");
    scanf("%d",&num);
    printf("enter the power :");
    scanf("%d",&pow);
    i =pow;
    while(pow>0)
    {
       result =result*num;
       pow--;
    }
     printf("%d ^ %d =%d\n",num,i,result);

return 0;
    }
