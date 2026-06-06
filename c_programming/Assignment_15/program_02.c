// 2. Accept N number from user and accept one accept one another number as No, return index of first occurence of that No.

#include<stdio.h>
#include<stdlib.h>

// Custom Boolean Definitions based on template type expectations
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    // Linearly traverse the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if current element matches the target number
        if(Arr[iCnt] == iNo)
        {
            return TRUE; // Return instantly on discovery
        }
    }

    return FALSE; // Return FALSE if no match exists after searching everything
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE; // Replaced layout's duplicate iRet with type-appropriate tracking variable
    int *p = NULL;

    printf("Enter number of elements : ");
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

    // Bugfix: Swapped template's missing 'iLength' context for valid 'iSize'
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Accept the number target that needs checking
    printf("Enter the number you want to search: ");
    scanf("%d", &iValue);

    // Execute lookup verification
    bRet = Check(p, iSize, iValue);

    // Process output presentation based on return status flags
    if(bRet == TRUE)
    {
        printf("Result is : Target number is Present\n");
    }
    else
    {
        printf("Result is : Target number is Absent\n");
    }

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}