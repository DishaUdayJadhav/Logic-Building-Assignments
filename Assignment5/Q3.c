//Write a program which accepts number from user and prints its numbers line
#include<stdio.h>

void DisplayNumberLine(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }

    printf("\n");  
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayNumberLine(iValue);

    return 0;
}


//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity