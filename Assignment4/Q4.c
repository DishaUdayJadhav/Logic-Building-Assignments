//Write a program which accept number from user and return summation of  display all its NON - Factors

#include<stdio.h>

int DisplayNonFactorsSum(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;   //Updator 
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           
            iSum = iSum + iCnt;
        }
       
    }
    return iSum;
}


int main()
{
    int iValue = 0 ,iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);


    iRet = DisplayNonFactorsSum(iValue);


    printf("Summation of Non Factors:%d\n ",iRet);
    
    return 0;
}


//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity