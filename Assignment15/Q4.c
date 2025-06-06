//Accept number of rows and number of columns from user and display below pattern
//Input : 6   5
/*output : 
    *       *       *       *       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       *       *       *       *
*/
#include<stdio.h>
void Display(int iRow, int iCol) 
{

        int i = 0, j = 0;

        for (i = 1; i <= iRow; i++) 
        {

            for (j = 1; j <= iCol; j++) 
            {
                if ((j == 1) || (j == iCol)  ||   (i == 1)   ||  (i == iRow) ) 
                {
                    printf("*\t");
                } 
                else 
                {
                    printf("@\t");
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