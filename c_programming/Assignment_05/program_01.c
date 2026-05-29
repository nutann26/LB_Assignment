// 1. write a program which accept number from user and print that number of $ & * on screen.
// input : 5
// : $ * $ * $ * $ * $ *

// input :3
//output : $ * $ * $ *

// input : -3
//output : $ * $ * $ *

#include<stdio.h>

void Pattern(int iNo)
{
    // Filter to handle negative input (Convert to positive)
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print the pattern iNo times
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t * \t ");
    }
    
    printf("\n"); // Print a new line at the end of the pattern
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}