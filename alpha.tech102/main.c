#include <stdio.h>
#include <stdlib.h>

///using mathematical operator in struct//

typedef struct point{
int x;
int y;
}point;

point addition(point p1,point p2)
{
    point result;
    result.x=p1.x+p2.x;
    result.y=p1.y+p2.y;
    return result;
}
void increment(point *p)
{
    (*p).x++;
    (*p).y++;
}
int main()
{
    point point1={3,4},point2={1,2};
    //point1.x++;
    //increment(&point1);
    //point1= point2 +3;
    point point3=addition(point1,point2);
    printf("the result is %d\n",point3.y);

    return 0;
}
