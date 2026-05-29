// 4. write a program which accept number from user and return summation of all its non factors.
//Input : 12
//output: 50

//input : 10
//output : 37




#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    
    // Handle negative numbers or 0 gracefully
    if (iNo <= 0)
    {
        return 0;
    }

    // Loop from 1 to iNo to find non-factors
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        // If remainder is not 0, then iCnt is a non-factor
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non-factors is: %d\n", iRet);

    return 0;
}