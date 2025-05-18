//write a program which accept radius of circle from user and calculate its area.consider value of PI = 3.14(Area = PI * Radius*Radius)

#include<stdio.h>
#define PI 3.14

double CircleArea( float fRadius)
{
    float fArea=0;

    return fArea =PI * fRadius * fRadius;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}

//Time complexity of this program cannot be calculated  as there is no looping.