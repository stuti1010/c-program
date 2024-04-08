#include <stdio.h>
#include <stdlib.h>

//counting the total number that is less than the given number by using recursion*//

int totalSmall(int num)
{
    int inputuser;
    printf("please enter some number:");
    scanf("%d",&inputuser);
    if(inputuser==-1)
        return 0;
        if(inputuser<num)
            return 1+totalSmall(num);
        return totalSmall(num);

}
int main()
{
    int num;
    int total;
    printf("enter the number:");
    scanf("%d",&num);
    total=totalSmall(num);
    printf("the result is %d\n",total);
    return 0;
}
