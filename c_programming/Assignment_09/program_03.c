//3. write a program which accept number from user and return the count of digits in between 3 and 7.
// input : 2395
//output : 1

// input : 1018 
// output : 0

// input : 4521
// output : 2

// input : 9922
//output : 0

#include<stdio.h>

int CountRange(int iNo)
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

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7 is %d\n", iRet);

    return 0;
}