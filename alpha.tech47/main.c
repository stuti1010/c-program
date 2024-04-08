#include <stdio.h>
#include <stdlib.h>

// printing an even natural numbers*//

int main()
{
    int num;
    int i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0; i<=num;i++)
    {
            printf("%d ",i*2);

    }
    return 0;
}
