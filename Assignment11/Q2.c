//Accep number from user and display below pattern

//Input :   5
//output:   5 # 4 # 3 # 2 # 1 #


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d # ", iCnt);
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


