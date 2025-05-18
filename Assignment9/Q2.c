//Write a program which accept number from user and check whether it contains 0 in it or not.

#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;  
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if (bRet == TRUE)
    {
        printf("Number contains 0\n");
    }
    else
    {
        printf("Number does not contain 0\n");
    }

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity