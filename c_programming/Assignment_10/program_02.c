//2. write a program which accept range from user and display all even numbers in between that range.
//input : 23 35
//output : 24 26 28 30 32 34

//input : 10 18
//output : 10 12 14 16 18

// input : 10 10 
//output : 10

//input : -10
//output : -10 -8 -6 -4 -2 0 2

//input: 90 18
//output :invalid range

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}