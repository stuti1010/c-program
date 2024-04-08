#include <stdio.h>
#include <stdlib.h>

//sum of odd number sequences*//

int main()
{
    int n,currentvalue,oddsum=0;
    int i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        printf("enter the value: ");
        scanf("%d",&currentvalue);

        if(currentvalue%2==1)
            oddsum+=currentvalue;

    }
       printf("oddsum =%d\n",oddsum);


    return 0;
}
