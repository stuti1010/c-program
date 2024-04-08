#include <stdio.h>
#include <stdlib.h>


// a program to print and count all unique elements in array*//

int main()
{
    int value[10];
    int i,j;
    int uniquecount=0;
    int foundduplicate;
    for(i=0;i<10;i++)
    {
        printf("enter the elements %d:",i+1);
        scanf("%d",&value[i]);
    }
    for(i=0;i<10;i++)
    {
     for(j=0;j<10;j++)
     {
         if(i == j)
            continue;
         if(value[i] == value[j])
            { foundduplicate=1;
              break;
            }
     }
     if(foundduplicate!=1)
     {
         printf("the unique values are %d\n",value[i]);
         uniquecount++;
     }
     else
     foundduplicate=0;
    }
    printf("total unique number are %d\n",uniquecount);
    return 0;
}
