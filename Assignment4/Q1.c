// 1: Write a program which accept number from user and display its multiplication of factors
#include<stdio.h>

int MultFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;


    if(iNo < 0)
    {
        iNo = -iNo;   //Updator 
    }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        
        if( ((iNo % iCnt) == 0)  )
        {
            
             iMult = iMult*iCnt;
             
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultFactors(iValue);

    printf("Multiplication of Factors are : %d ",iRet);

    return 0;
}


// Time Complexity O(N / 2)
//N is a natural Number
//where N >= 0 and  N<= Infinity 