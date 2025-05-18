//write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>

int ReverseDigits(int iNo)
{
       
    int iDigit = 0 ;
    int iCnt = 0 , iRev = 0;

    if ( iNo < 0)
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

       return iRev;
}
int main()
{
    int ivalue = 0 , iRet = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    iRet = ReverseDigits(ivalue);

    printf("Revresed number is :%d",iRet);

    return 0;
}

//Time Complexity O(log N)
//N is a natural Number
//where N >= 0 and  N<= Infinity