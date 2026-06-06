//3.Accept N number from user check whether that numbers contains 11 in it or not.
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    // Iterate through the array to compute the sums
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt]; // Add value if even
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];   // Add value if odd
        }
    }

    // Return the final difference: (Sum of Evens - Sum of Odds)
    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0; // Fixed duplicate iRet declaration from layout
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    // Safeguard constraint validation
    if(iSize <= 0)
    {
        printf("Invalid size input.\n");
        return -1;
    }

    // Dynamic memory allocation
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    // Bugfix: Used valid variable 'iSize' instead of 'iLength' inside main
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Execute summation and difference logic
    iRet = Difference(p, iSize);

    printf("Result is : %d\n", iRet);

    // Free the dynamically allocated memory safely
    free(p);

    return 0;
}