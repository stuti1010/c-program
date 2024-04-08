#include <stdio.h>
#include <stdlib.h>
#define size 21

//printing the multiplication table by using array*//

int main()
{
    int mat[size][size];
    int i,j;
    printf("table :-\n");
    for(i=1;i<size;i++)

     for(j=1;j<size;j++)
       mat[i][j]=i*j;

       for(i=1;i<size;i++)
       {
           for(j=1;j<size;j++)
            printf("%5d",mat[i][j]);
            printf("\n");
       }

    return 0;
}
