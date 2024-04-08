#include<stdio.h>
#include<stdlib.h>

///creating a "Static Array Of Point"//

typedef struct point{
int x;
int y;
}point;

int main()
{
    point pointarray[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter the #%d 'x' coordinate:",i+1);
    scanf("%d",&pointarray[i].x);
    printf("enter the #%d 'y' coordinate:",i+1);
    scanf("%d",&pointarray[i].y);
}
for(i=0;i<5;i++)
{
    printf("point #%d =(%d,%d)\n",i+1,pointarray[i].x,pointarray[i].y);
}
return 0;
}
