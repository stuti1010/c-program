#include <stdio.h>
#include <stdlib.h>
#define size 26
///finding the maximum lowercase letter by using counting array//

int main()
{
    char arr[size]= {'k','i','b','r','c','k','z','m'};
    char countarr[26]={0};
    int i,maxcount;
    for(i=0;i<size;i++)
    {
        countarr[arr[i]-'a']++;
    }
    maxcount=0;
    for(i=1;i<26;i++)
    {
        if(countarr[i]>countarr[maxcount])
            maxcount=i;
    }
    printf("the maximum character display most is %d\n", maxcount+'a');
    printf("the maximum number of appearances is %d\n",countarr[maxcount]);

    return 0;
}
