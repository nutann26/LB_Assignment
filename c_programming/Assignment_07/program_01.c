//1. write a program which accept number from user and display below pattern.
//input : 5
// output : * * * * * # # # # #

//input : 6
// output:* * * * * * # # # # # # #

//input: -5
//output: * * * * * # # # # #   

//input :2
//output : * * # #

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*'
    for(i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }

    // Print '#'
    for(i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}