//3. write a program to find even factorial of given number.
// input : 5
// output:8   (4*2)

// input : -5
//output : 8     (4*2)

// input : 10 
// output : 3840   (10*8*6*4*2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate even factorial
    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}