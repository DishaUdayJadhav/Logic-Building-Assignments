//2.1.Accept one number from user and print that number of * on screen

#include<stdio.h>
void Display(int iNo)
{
    //write updater
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}