//Write a program which accept distance in kilometer and convert it into meter( 1 kilometer = 1000 meter)

#include<stdio.h>

int KilomToMeter(int iNo)
{
    iNo = iNo * 1000;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KILOMETER:\n");
    scanf("%d",&iValue);

    iRet = KilomToMeter(iValue);

    printf("Distance in Metre :%d meter\n",iRet);

    return 0;
}

//Time complexity of this program cannot be calculated  as there is no looping.