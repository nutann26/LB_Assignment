//5. write a program which accept number from user and display its table in revrse order.
//input : 2
// output: 20 18 16 14 12 10 8 6 4 2

// input : 5
//output : 50 45 40 35 30 25 20 15 10 5

//input : -5
//output : 50 45 40 35 30 25 20 15 10 5
#include<stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    // If number is negative make it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print table in reverse order
    for(i = 10; i >= 1; i--)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}