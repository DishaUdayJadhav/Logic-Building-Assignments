//Accep number from user and display below pattern

//Input :   5
//output:   # 1 * # 2 * # 3 * # 4 *


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# %d * ", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}


