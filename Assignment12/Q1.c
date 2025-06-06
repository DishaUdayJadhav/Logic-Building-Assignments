//Accept number of rows and number of columns from user and didplay below pattern
//Input : 4   4
/*output : *  *  *  *
           *  *  *  *
           *  *  *  *
           *  *  *  *
*/


#include <stdio.h>
// Its a Iteration

void Display(int iRow , int iCol)
{

    int j = 0 , i = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("*\t");
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