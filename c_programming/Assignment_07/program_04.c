//4. write a program to find odd factorial of given number.
// input :5
//output :15 (5*3*1)

// input :-5
//output: 15 (5*3*1)

// input :10 
//output : 945 (9*7*5*3*1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate odd factorial
    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}