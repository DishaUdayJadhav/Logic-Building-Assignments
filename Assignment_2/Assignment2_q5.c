//Accept number from user and check whether number is even or odd 
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    //Display result

    if(bRet == TRUE)
    {
        printf("NUMBER IS EVEN\n");

    }
    else
    {
        printf("NUMBER IS ODD\n");
    }

    return 0;
}
