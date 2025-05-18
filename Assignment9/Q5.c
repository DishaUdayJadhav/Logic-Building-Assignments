//write a program which accept number from user and count frequency of such a digits which are less than 6.

#include <stdio.h>

int CountLessThanSix(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;  
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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

    iRet = CountLessThanSix(iValue);

    printf("Frequency of digits less than 6 is: %d\n", iRet);

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity