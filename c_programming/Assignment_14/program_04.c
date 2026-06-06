//4. Accept N number from user and return frequency of 11 from it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenFreq = 0;
    int iOddFreq = 0;

    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenFreq++; // Increment if number is even
        }
        else
        {
            iOddFreq++;  // Increment if number is odd
        }
    }

    // Return the difference: (Frequency of Even - Frequency of Odd)
    return (iEvenFreq - iOddFreq);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0; // Fixed duplicate variable declaration from layout
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    // Safeguard for invalid array dimensions
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

    // Bugfix: Used valid variable 'iSize' instead of 'iLength' inside main prompt
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Execute frequency evaluation
    iRet = Frequency(p, iSize);

    printf("Result is : %d\n", iRet);

    // Free memory back to the heap pool safely
    free(p);

    return 0;
}