//Accept one number from user and print that number of * on screen
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for (int i=0;i < iNo;i++)
    {
        printf("*");
    }
}

int main()
{
    int iValue =0;
   

    printf("enter number of stars you want to print");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
    
}