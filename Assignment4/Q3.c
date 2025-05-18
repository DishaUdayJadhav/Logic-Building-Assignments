//Write a program which accept number from user and display all its NON - Factors

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;   //Updator 
    }

    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
       
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);


    printf("Non Factors :\n ");
    DisplayNonFactors(iValue);

    return 0;
}


//Time Complexity O(N )
//N is a natural Number
//where N >= 0 and  N<= Infinity