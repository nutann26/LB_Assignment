//5. write a program which accept range from user and display all numbers in between that range in reverse order.
// input : 23 35 
// output : 35 34 33 32 31 30 29 28 27 26 25 24 23

//input :10 18
// output : 18 17 16 15 14 13 12 11 10

//input :10 10
//output :10

//input :-10 2
//output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

//input -10 2
//output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

//input : 90 18
//output: invalid range

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(int i = iEnd; i >= iStart; i--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}