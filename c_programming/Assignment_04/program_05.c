// 5. write a program which accept number from user and return difference between summation of all its factors and non factors.
// input :12
// output : -34   (16 -50)
 
// input : 10 
// output : -29 (8 -37)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    // Handle edge cases for numbers less than or equal to 0
    if (iNo <= 0)
    {
        return 0;
    }

    // Loop runs from 1 to iNo - 1
    for (int iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            // If remainder is 0, it is a factor
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            // If remainder is not 0, it is a non-factor
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    // Return the difference: (Sum of Factors) - (Sum of Non-Factors)
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}