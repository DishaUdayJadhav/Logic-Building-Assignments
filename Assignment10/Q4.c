//Write a program which accept number from user and return multiplication of all digits.

#include <stdio.h>

int MultiplyDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo == 0)
    {
        return 0; 
    }

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0) 
        {
            iMult =  iMult * iDigit;
        }

        iNo /= 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultiplyDigits(iValue);

    printf("Multiplication of digits: %d\n", iRet);

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity