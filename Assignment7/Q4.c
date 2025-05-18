// Write a program to find Odd Factorial of given number


#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf(" Odd Factorials of %d is", iRet);

    return 0;
}

//Time Complexity O(N)
//N is a natural Number
//where N >= 0 and  N<= Infinity