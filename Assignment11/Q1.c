//ACcept number from user and display the below pattern

//Input :   5
//output:   A   B   C   D   E


#include<stdio.h>

void Pattern(int iNo)
{
    char ch = '\0';

    for(ch = 'A'; ch < 'A' + iNo; ch++)
    {
        printf("%c\t", ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

