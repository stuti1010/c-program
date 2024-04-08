#include <stdio.h>
#include <stdlib.h>

//intermediate calculator by using switch case*//

int main()
{
    int num1,num2;
    char mathoperation;
    printf("enter what  math operation you would like to choose :");
    scanf("%c",&mathoperation);
    printf("enter the num1 :");
    scanf("%d",&num1);
    printf("enter the num2 :");
    scanf("%d",&num2);
    switch (mathoperation)
    {
    case '+':
        printf("%d %c %d =%d\n",num1,mathoperation,num2,num1+num2);
        break ;
    case '-':
        printf("%d %c %d =%d\n",num1,mathoperation,num2,num1-num2);
        break ;
    case '*':
        printf("%d %c %d =%d\n",num1,mathoperation,num2,num1*num2);
        break ;
    case '/':
        printf("%d %c %d =%.1d\n",num1,mathoperation,num2,num1/num2);
        break;
    default:
        printf("this mathematic operation will not be able to run");
        break ;
    }
    return 0;
}
