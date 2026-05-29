//2. write a program which accept number from user and print numbers till that number:
 //input : 8
 // output : 1 2 3 4 5 6 7 8
#include<stdio.h>

void Display(int iNo)
{
    // Handle edge case where input is 0 or negative
    if (iNo <= 0)
    {
        printf("Please enter a number greater than 0.\n");
        return;
    }

    // Loop from 1 to iNo to print the numbers sequentially
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    
    printf("\n"); // Move to a new line after printing the sequence
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}