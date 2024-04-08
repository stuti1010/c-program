#include<stdio.h>
#include<stdlib.h>
#define size 52
///finding maximum between these by using counting array//

int main()
{
    char arr[size]={'K','O','c','R','C','"','K','r'};
    int countarr[52]={0};
    int i;
    char maxindex;
    for(i=0;i<size;i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
            countarr[arr[i]-'a'-26]++;
        else if(arr[i]>='A'&& arr[i]<='Z')
            countarr[arr[i]-'A'+26]++;
    }
    maxindex=0;
    for(i=1;i<52;i++)
    {
        if(countarr[i]>countarr[maxindex])
            maxindex=i;
    }
    if(maxindex<26)
       {
        printf("the maximum no of appearances is %d\n",countarr[maxindex]);
        printf("the maximum digit is %d\n",maxindex+'a'+26);
        }
        else
        printf("the maximum no of appearances is %d\n",countarr[maxindex]);
        printf("the maximum digit is %d\n",maxindex+'A'-26);
        return 0;
}
