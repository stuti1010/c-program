#include <stdio.h>
#include <stdlib.h>

//finding that the given number lies in which quadrant by using else if ladder*//

int main()
{
    int x,y;
    printf("enter the first number :");
    scanf("%d",&x);
    printf("enter the second number :");
    scanf("%d",&y);
    if (x>0 && y>0)
        printf("the point (%d,%d) is located in first quadrant\n",x,y);
    else if (x<0 && y>0)
        printf("the point (%d,%d) is located in second quadrant\n",x,y);
    else if (x<0 && y<0)
        printf("the point (%d,%d) is located in third quadrant\n",x,y);
    else
        printf("the point (%d,%d) is located in fourth quadrant\n",x,y);

    return 0;
}
