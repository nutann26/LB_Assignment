//4. write a program which accept number from user and return multiplication of all digits.
// input : 2395
// output : 270 

// input : 1018
// output : 8 

// input : 9440
// output : 144 

// input : 922432
//output : 864

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        // Ignore 0 digit
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is %d\n", iRet);

    return 0;
}