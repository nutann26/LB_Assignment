// 1. write a program which accept number from user and if number is less than 50 then print small ,if  it is greater than 50 and less than 100 then print  medium, if it is greater than 100 then print large.
//input : 75
//output : Medium  

#include<stdio.h>

void Number(int iNo)
{
    // Check if number is less than 50
    if (iNo < 50)
    {
        printf("small\n");
    }
    // Check if number is between 50 and 100 (inclusive)
    else if ((iNo >= 50) && (iNo <= 100))
    {
        printf("medium\n");
    }
    // Check if number is greater than 100
    else if (iNo > 100)
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}