//2. accept amount in us dollar and return its corresponding value in indian currency. consider 1$ as 70 rupees.
//input : 10
//output : 700

//input : 3
//output: 270

// input : 1200 
//output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}