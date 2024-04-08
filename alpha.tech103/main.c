#include <stdio.h>
#include <stdlib.h>

///using relational and logical operator in struct///
typedef struct point {
int x;
int y;
}point;

int equalpoint(point p1,point p2)
{
    if((p1.x==p2.x) && (p1.y==p2.y))

        return 1;
        else
            return 0;
}
int notequalpoint(point p1,point p2)
{
    if((p1.x!=p2.x) && (p1.y!=p2.y))
    return 1;
        else
            return 0;

}

int main()
{
    point point1={3,4},point2={1,2};
    /*if(equalpoint(point1,point2)==0)
    {
        printf("the point are equal!\n");
    }*/
    if(notequalpoint(point1,point2)!=0)
    {
        printf("the point are not equal!\n");
    }

    return 0;
}
