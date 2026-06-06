//Accept N number from user and accept one another number as No,return frequency of NO from it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iTargetCount = 0;

    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the current element is exactly equal to 11
        if(Arr[iCnt] == 11)
        {
            iTargetCount++; // Increment the counter when 11 is found
        }
    }

    return iTargetCount; // Return the total occurrences of 11
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0; // Fixed duplicate variable declaration bug from layout
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

    // Execute frequency evaluation
    iRet = Frequency(p, iSize);

    printf("Result is : %d\n", iRet);

    // Free the dynamically allocated memory block safely
    free(p);

    return 0;
}