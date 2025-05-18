#include<stdio.h>

int DollarToRupees(int iDollar)
{
    if(iDollar < 0)
    {
        return -1;  // Indicating invalid input
    }

    return iDollar * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &iValue);

    iRet = DollarToRupees(iValue);

    if(iRet == -1)
    {
        printf("ENTER VALID AMOUNT\n");
    }
    else
    {
        printf("Value in INR is %d\n", iRet);
    }

    return 0;
}


//Time complexity of this program cannot be calculated  as there is no looping.