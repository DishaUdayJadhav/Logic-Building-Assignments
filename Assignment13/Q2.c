//Accept number of rows and number of columns from user and didplay below pattern
//Input : 4   4
/*output : A  B  C  D
           a  b  c  d
           A  B  C  D
           a  b  c  d
*/


#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i, j;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 1)
                ch = 'A' + j - 1;   // Uppercase letters for odd rows
            else
                ch = 'a' + j - 1;   // Lowercase letters for even rows

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