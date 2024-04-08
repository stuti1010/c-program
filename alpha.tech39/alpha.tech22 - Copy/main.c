#include <stdio.h>
#include <conio.h>

//*to check whether the given char is vowel or consonant by using switch -case statement*//

int main()
{
 char ch;
 printf("enter any character :");
 scanf("%c",&ch);
 switch(ch)
 {
     case'a':
     case'A':
    printf("vowel");
    break;
    case'e':
    case'E':
    printf("vowel");
    break ;
    case'i':
    case'I':
    printf("vowel");
    break ;
    case'o':
    case'O':
    printf("vowel");
    break ;
    case'u':
    case'U':
    printf("vowel");
    break;
    default :
     printf("consonant");


 }
    return 0;
}
