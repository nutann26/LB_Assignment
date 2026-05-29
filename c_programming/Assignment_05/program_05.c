// write a program which accept N and print first 5 multiples of N.
// input : 4
// output : 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    // Loop runs exactly 5 times to get the first 5 multiples
    for (int iCnt = 1; iCnt <= 5; iCnt++)
    {
        // Multiply the user input by the counter value
        printf("%d\t", iNo * iCnt);
    }
    
    printf("\n"); // Move to a new line after printing the sequence
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}