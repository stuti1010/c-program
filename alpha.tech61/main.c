#include <stdio.h>
#include <stdlib.h>

// printing sequence of 123 by using function *//

int ninenumber(int length)
{
    int num=0;
    int i;
    for(i=0;i<length;i++)
    {
        num=num*10 +i+1;
    }
    return num;
}
int main()
{
    int lengthseq;
    int result;
    printf("enter the length for n-th sequence:");
    scanf("%d",&lengthseq);
    result= ninenumber(lengthseq);
    printf("result =%d\n",result);
    return 0;
}
