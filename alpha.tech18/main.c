#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if (number%2==0)
        printf("%d is even",number);
    else
        printf("%d is odd",number);
    return 0;
}
