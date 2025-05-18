//Write a program which accept number from user and display its factors in decreasing order.

#include<stdio.h>

void FactorsDecreasingOrder(int iNo)
{
    int iCnt = 0;


    if(iNo < 0)
    {
        iNo = -iNo;   //Updator 
    }
    
    for(iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    
    printf("Factors in decreasing order: ");
    FactorsDecreasingOrder(iValue);

    return 0;
}

// Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity
