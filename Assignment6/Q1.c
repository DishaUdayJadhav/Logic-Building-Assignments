//Write a program which accept number from user and if number is less than 50 then print small,if it is gretaet than 50 and less than 100 then print medium,if it is gretaet than 100 then print large.

#include<stdio.h>

void Number(int iNum)
{
    if (iNum < 0 )
    {
        printf("Enter valid number ");
    }
    else if(iNum < 50)
    {
        printf("SMALL");
    }
    else if(iNum > 50 && iNum < 100)
    {
        printf("MEDIUM");
    }
    else if(iNum > 100)
    {
        printf("LARGE");
    }

}

int main()
{

    int iValue = 0;

    printf("Enter number:\n ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}


//Time Complexity cannot be calculated as there is looping in this program. 