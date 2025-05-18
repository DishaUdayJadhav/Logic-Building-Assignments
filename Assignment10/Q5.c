//write a program which accept number from user and return difference summation of even digits and summation of odd digits.

#include <stdio.h>

int DiffEvenOddSum(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }

        iNo /= 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = DiffEvenOddSum(iValue);

    printf("Difference between even and odd digit sums: %d\n", iRet);

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity