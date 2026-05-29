//1.write a program which accept radius of circle from user and calculate its area consider value of pi as 3.14(Area = pI*Radius*Radius)
//input :53
//output : 88.2026

// input:10.4 
// output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}