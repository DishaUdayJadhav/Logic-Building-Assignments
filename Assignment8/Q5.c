//write a program which accepts area in square feet and convert it into square meter ( 1 square feet = 0.0929 square meter)

#include <stdio.h>

double SquareFeetToSquareMeter(double fArea)
{
    return fArea * 0.0929;
}

int main()
{
    double fValue = 0.0, dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%lf", &fValue);

    dRet = SquareFeetToSquareMeter(fValue);

    printf("Area in square meters: %.4f\n", dRet);

    return 0;
}

//Time complexity of this program cannot be calculated  as there is no looping.