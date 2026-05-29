// write a program which accept number from user and display its factors in decreasing order.
// input :12
// output : 6 4 3 2 1

// input 13
// output : 1

// input :10
// output : 5 2 1 
#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    // Handle negative numbers by converting them to positive
    if (iNo < 0)
     {
        iNo = -iNo;
    }

    // Start from the highest possible factor (half the number) and decrement
    for (i = (iNo / 2); i >= 1; i--)
    {
        // Filter: check if 'i' is a factor
        if ((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}