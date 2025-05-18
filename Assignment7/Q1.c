//Write a program which accept number from user and display below pattern 
// * #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  // Updator
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }

     for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
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

//Time Complexity O(2N)
//N is a natural Number
//where N >= 0 and  N<= Infinity