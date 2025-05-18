//Write a program which accepts number from user and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity