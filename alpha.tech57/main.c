#include <stdio.h>
#include <stdlib.h>

// finding area of rectangle using functions*//

float areaofrectangle(int height ,int width)
{
    float area;
    area=height*width;
    return area;
}
int main()
{
    int a,b;
    printf("enter the height:");
    scanf("%d",&a);
    printf("enter the width:");
    scanf("%d",&b);
    printf("area of rectangle is %f\n",areaofrectangle(a,b));
    return 0;

}
