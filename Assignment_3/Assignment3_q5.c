//5.Accept on character from user and check whetherthat character is vowel(a,e,i,o,u) or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch)
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
       {
            return TRUE;
       }
       else
       {
            return FALSE;
       }
}

int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}