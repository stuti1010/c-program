#include <stdio.h>
#include <stdlib.h>
#define size 3

//copying an array*//

int main()
{
    int date[size]={29,01,2004};
    int date2 [size];
    int i;
    for(i=0;i<size;i++)
    {
        date2[i]=date[i];

    }
    for (i=0;i<size;i++)
    {
        printf("original date at index at %d =%d\n",i,date[i]);
        printf("copied date at index at %d =%d\n",i,date2[i]);
    }
    return 0;
}
