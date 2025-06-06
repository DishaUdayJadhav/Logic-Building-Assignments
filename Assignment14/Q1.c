//Accept number of rows and number of columns from user and didplay below pattern
//Input : 4   4
/*output : 1  2  3  4 
           5  6  7  8
           9  1  2  3
           4  5  6  7
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j, iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo++;

            if(iNo == 10)  // Reset to 1 after 9
                iNo = 1;
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