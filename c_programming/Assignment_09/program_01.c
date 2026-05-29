//1. write a program which accept number from user and return the count of even digits.
// input : 2395
// output : 1

// input : 1018 
//output : 2

// input : -1018 
// output : 2

// input : 8462
//output :4

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits is %d\n", iRet);

    return 0;
}