//1.Accept one number from user and print that number of * on screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    //write updater

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("enter number of stars you want to print");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}