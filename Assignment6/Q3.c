//Write a program to find factorial of given number


#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorials of %d is",iRet);

    return 0;

}

//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity