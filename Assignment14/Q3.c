//Accept number of rows and number of columns from user and didplay below pattern
//Input : 5   5
/*output : a  b  c  d  e
           1  2  3  4  5
           a  b  c  d  e
           1  2  3  4  5
           a  b  c  d  e
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
                printf("%c\t", 'a' + j - 1);  // Print lowercase letters
            else
                printf("%d\t", j);           // Print numbers
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