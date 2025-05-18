//Write a program which accept number from user and return difference between summation of all of its factors and non Factors

#include<stdio.h>

int DifferenceFactorNonFactorSum(int iNo)
{
    int iCnt = 0;
    int iSumFactors = 0, iSumNonFactors = 0;

    if(iNo < 0)
    {
        iNo = -iNo;   // Updator 
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFactors += iCnt;
        }
        else
        {
            iSumNonFactors += iCnt;
        }
    }

    return iSumFactors - iSumNonFactors;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = DifferenceFactorNonFactorSum(iValue);

    printf("Difference between sum of factors and non-factors: %d\n", iRet);

    return 0;
}



//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity