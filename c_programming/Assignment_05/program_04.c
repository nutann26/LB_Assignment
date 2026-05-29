// 4. write a program which accepts N from user and print all odd numbers up to N.
// input : 18
// output : 1 3 5 7 9 11 13  

#include<stdio.h>

void OddDisplay(int iNo)
{
    // Filter to handle negative inputs gracefully
    if (iNo <= 0)
    {
        return;
    }

    // Loop from 1 to iNo to find odd numbers
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        // If remainder is not 0 when divided by 2, it is an odd number
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    
    printf("\n"); // Move to a new line after printing the sequence
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}