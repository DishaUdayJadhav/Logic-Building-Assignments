//Write a program which accept number from user and display its table in reverse order

#include<stdio.h>

void TableReverse(int iNo)
{
    int iCnt = 0 , iTable = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        
        printf("%d\n",(iNo * iCnt));
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    TableReverse(iValue);

    return 0;

}

//Time Complexity O(1)
//N is a natural Number
//where N >= 0 and  N<= Infinity