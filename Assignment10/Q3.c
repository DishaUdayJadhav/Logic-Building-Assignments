//Write a program which accept number from user and return the count of digits in between 3 and 7.

#include <stdio.h>

int CountDigitsBetween3and7(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;  
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit > 3 && iDigit < 7)
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

    iRet = CountDigitsBetween3and7(iValue);

    printf("Count of digits between 3 and 7: %d\n", iRet);

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity