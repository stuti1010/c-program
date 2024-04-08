#include <stdio.h>
#include <stdlib.h>

//finding the even number in the sequence by using array*//

int totalEvenNumber()
{
    int inputuser;
    printf("please enter the number:");
    scanf("%d",&inputuser);

    if(inputuser == -1)
        return 0;
    if(inputuser %2 == 0)
        return 1+ totalEvenNumber();
    return totalEvenNumber();
}
int main()
{
    int totaloccurences;
    totaloccurences = totalEvenNumber();
    printf("total occurences of even number in the sequence is %d",totaloccurences);
    return 0;
}
