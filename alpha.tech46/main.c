#include <stdio.h>
#include <stdlib.h>

//printing the multiplication table of a number*//

int main()
{
    int num;
    int i,table;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
       table= num*i;
       printf("%d * %d =%d\n",num,i,table);

    }
    return 0;
}
