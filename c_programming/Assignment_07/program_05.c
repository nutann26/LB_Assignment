// 5. write a program which returns difference between even factorial and odd factorial of given number.
// input :5 
// output : -7  (8-15)

// input : -5 
//output : -7     (8- 15)

// input 10
//output : 2895 (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate even and odd factorial
    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}