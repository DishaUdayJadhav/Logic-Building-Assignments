//write a program which acccepts temperature in Fahrenheit and convert it into celsius (1 celsius = (Fahrenheit - 32) * (5/9))

#include<stdio.h>

double FahrenToCelsius(float fTemp)
{
    return (fTemp - 32) * 5.0 / 9.0;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%f", &fValue);

    dRet = FahrenToCelsius(fValue);

    printf("Temperature in Celsius : %.2f\n", dRet);

    return 0;
}

//Time complexity of this program cannot be calculated  as there is no looping.