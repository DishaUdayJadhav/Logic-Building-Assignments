//Accept number of rows and number of columns from user and display below pattern
//Input : 4   4
/*output : 
    1       2       3       4       
    1       *       *       4       
    1       *       *       4       
    1       2       3       4       
    
*/
#include<stdio.h>
void Display(int iRow, int iCol) 
{
    int i, j;

    for (i = 1; i <= iRow; i++) 
    {
        for (j = 1; j <= iCol; j++) 
        {
            
            if (i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            
            else if (j == 1)
            {
                printf("1\t");
            }
            else if (j == iCol)
            {
                printf("%d\t", iCol);
            }
            else
            {
                printf("*\t");
            }
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