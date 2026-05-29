//4. write a program which accept temperature in fahrenheit and convert it into celsious.(1 celsius = (faherenheit -32) * (5/9))
// input :10
// output : -12.2222 (10-32) * (5/9)

// input : 34
// output : 1.11111 ( 34 -32 )*(5/9) 


#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}