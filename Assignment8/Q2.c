// Write a program which accepts width and height of rectangle from user and calculate its area(Area = width * Height)

#include <stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    float fArea = 0;

    return fArea = fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Height");
    scanf("%f", &fValue1);

    printf("Enter Width");
    scanf("%f", &fValue2);

    dRet = RectangleArea(fValue1, fValue2);

    printf("Area of Rectangle is %f", dRet);

    return 0;
}

//Time complexity of this program cannot be calculated  as there is no looping.