//5. write a program which accept area in square feet and convert it into square meter.(1 square feet = 0.0929 square meter)
//input : 5
//output : 0.464515

// input: 7
// output: 0.650321

#include<stdio.h>

double SquareMeter(int iArea)
{
    double dAns = 0.0;

    dAns = iArea * 0.0929;

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}