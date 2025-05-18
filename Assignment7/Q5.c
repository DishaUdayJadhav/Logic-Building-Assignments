// Write a program to  accept a number from user and find  Difference between Odd end even factorials of given number.

#include <stdio.h>

int DifferenceFactorial(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)  // Even
        {
            iEvenFact *= iCnt;
        }
        else                 // Odd
        {
            iOddFact *= iCnt;
        }
    }

    return iEvenFact - iOddFact; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = DifferenceFactorial(iValue);

    printf("Difference between even and odd factorial of %d is %d\n", iValue, iRet);

    return 0;
}

//Time Complexity O(N)
//N is a natural Number
//where N >= 0 and  N<= Infinity