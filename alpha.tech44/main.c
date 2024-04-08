#include <stdio.h>
#include <stdlib.h>

//printing from  1 to num and vice-versa*//

int main()
{
    int num;
    int i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0; i<=num; i++)
        printf("%d ",i);
        printf("\n");

        for (i=num;i>=0;i--)
            printf("%d ",i);



 return 0;

}
