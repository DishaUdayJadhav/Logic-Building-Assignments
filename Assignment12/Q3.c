//Accept number of rows and number of columns from user and didplay below pattern
//Input : 3   5
/*output : 
            5       4       3       2       1
            5       4       3       2       1
            5       4       3       2       1
           
*/


#include <stdio.h>
// Its a Iteration

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
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

    Pattern(iValue1,iValue2);

    return 0;
}