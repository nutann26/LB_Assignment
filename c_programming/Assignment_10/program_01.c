//1.write a program which accept range from user and display all numbers in between that range.
//input : 23 35
//output : 23 24 25 26 27 28 29 30 31 32 33 34 35

//input : 10 18 
//output : 10 11 12 13 14 15 16 17 18

// input :10 10
//output: 10

// input -10 2 
// output : -10 -9 -7 -6 -5 -4 -3 -2 -1 0 1 2

//input : 90 18
//output : invalid range

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}