//Accept number of rows and number of columns from user and didplay below pattern
//Input : 3   5
/*output : A  A  A  A  A  A
           B  B  B  B  B  B
           C  C  C  C  C  C
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A' + i - 1;  // Letter for the current row

        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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