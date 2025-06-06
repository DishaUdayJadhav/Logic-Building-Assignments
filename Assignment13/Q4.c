//Accept number of rows and number of columns from user and didplay below pattern
//Input : 4   5
/*output : 4  4  4  4  4  4
           3  3  3  3  3  3  
           2  2  2  2  2  2
           1  1  1  1  1  1
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j;
    int val;

    for(i = 1; i <= iRow; i++)
    {
        val = iRow - i + 1;  // Starting from iRow down to 1

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", val);
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