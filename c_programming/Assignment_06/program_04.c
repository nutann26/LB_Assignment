// 4. write a program which accept number from user and display its table
//input:2
//output: 2 4 6 8 10 12 14 16 18 20

//input: 5
//output: 5 10 15 20 25 30 35 40 45 50

//input : -5
//output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

void Table(int iNo)
{
    // Updater: Convert negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Filter: If the number is 0, the entire table is 0
    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    // Loop from 1 to 10 to print the multiplication table
    for (int iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    
    printf("\n"); // Move to a new line after printing the sequence
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}