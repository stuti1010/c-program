#include <stdio.h>
#include <stdlib.h>

// a program to find the non-unique values in an array*//

int main()
{
     int value[10];
    int i,j;
    int nonuniquecount=0;
    int foundduplicate;
    for(i=0;i<10;i++)
    {
        printf("enter the elements %d:",i+1);
        scanf("%d",&value[i]);
    }
    for(i=0;i<10;i++)
    {
     for(j=0;j<i;j++)
     {
         if(value[i] == value[j])
            {
                foundduplicate=1;
              break;
            }
     }
     if(foundduplicate==1)
        break;
     else
     for(j=i+1;j<10;j++)
     {
         if(value[i]==value[j])
         {
             printf("non unique elements %d\n",value[i]);
             nonuniquecount++;
         }
     }

    }
    printf("total unique number are %d\n",nonuniquecount);
    return 0;
}
