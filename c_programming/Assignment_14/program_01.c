#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;

    // Loop through the array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the current element is even
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++; // Increment the counter if even
        }
    }

    return iEvenCount; // Return the final count of even numbers
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    // Fixed template's 'iLength' to 'iSize' inside main context
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Execute logic wrapper block
    iRet = CountEven(p, iSize);

    printf("Result is : %d\n", iRet);

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}