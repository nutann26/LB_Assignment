//1.Accept N from number from user and accept one another number as No,check whether no is present or not.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequencyCount = 0;

    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the current element matches the user's search number
        if(Arr[iCnt] == iNo)
        {
            iFrequencyCount++; // Increment count on finding a match
        }
    }

    return iFrequencyCount; // Return total occurrences
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0; // Fixed duplicate iRet bug
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

    // Bugfix: Swapped template's missing 'iLength' context for 'iSize'
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Ask the user for the specific number they want to count
    printf("Enter the number you want to search for: ");
    scanf("%d", &iValue);

    // Execute frequency evaluation wrapper
    iRet = Frequency(p, iSize, iValue);

    printf("Result is : %d\n", iRet);

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}