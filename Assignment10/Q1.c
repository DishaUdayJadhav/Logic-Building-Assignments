//Write a program which accept number from user and return the count of even digits.

#include <stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;  
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);

    printf("Count of even digits: %d\n", iRet);

    return 0;
}


//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity