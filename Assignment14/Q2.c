//Accept number of rows and number of columns from user and didplay below pattern
//Input : 5   5
/*output : 2  4  6  8  10
           1  3  5  7  9
           2  4  6  8  10
           1  3  5  7  9
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j, iNo;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
            iNo = 2;  // Even numbers for odd rows
        else
            iNo = 1;  // Odd numbers for even rows

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo += 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}