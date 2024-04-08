///sorted of array using function and passing value as pointer:-//
#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("enter the elements:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   sort(&a[0]);
    printf("the sorted elements are:-\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

}
void sort( int *x)
{
    int i,j,a1;
        for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(x+i) > *(x+j))
            {
                a1=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=a1;
            }
        }
    }

}
