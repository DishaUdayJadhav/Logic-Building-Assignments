//Accept number of rows and number of columns from user and didplay below pattern
//Input : 5   5
/*output : 1   2   3   4   5
          -1  -2  -3  -4  -5
           1   2   3   4   5
          -1  -2  -3  -4  -5
           1   2   3   4   5
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 1)
                printf("%d\t", j);    // Positive numbers for odd rows
            else
                printf("-%d\t", j);   // Negative numbers for even rows
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