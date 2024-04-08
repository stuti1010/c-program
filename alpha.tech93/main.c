#include <stdio.h>
#include <stdlib.h>

//printing the sum of  even number in the sequence by using recursion*//

int totalEvenNumber()
{
    int inputuser;
    printf("please enter the number:");
    scanf("%d",&inputuser);

    if(inputuser == -1)
        return 0;
    if(inputuser %2 == 0)
        return inputuser + totalEvenNumber();
    return totalEvenNumber();
}
int main()
{
    int totaloccurences;
    totaloccurences = totalEvenNumber();
    printf("total sum of occurences of even number in the sequence is %d",totaloccurences);
    return 0;
}
