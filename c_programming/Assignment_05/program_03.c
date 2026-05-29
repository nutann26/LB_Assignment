//3. write a program which accept number from user and print its number line
// : 4
//output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
    // Filter to handle negative input (e.g., if user enters -4, convert it to 4)
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop starts from -iNo and goes up to iNo
    for (int iCnt = -iNo; iCnt <= iNo; iCnt++)
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