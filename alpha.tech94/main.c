#include <stdio.h>
#include <stdlib.h>

//writing a recursive function that print all number  from 1 up to 'n'*//

void printOneToN(int n)
{
    if(n>=1)
    printOneToN(n-1);
    printf("%d ",n);
}
void printNToOne(int n)
{
    if(n>=1)
        printf("%d ",n);
    printNToOne(n-1);

}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    printf("all the numbers from one to N :\n");
    printOneToN(num);

    printf("\n all the values from N to one :");
    printNToOne(num);
    return 0;
}
