//3. Accept N number from user and return the difference between largest and smallest number.
//Input : N :6
// Elements : 85 66 3 66 93 88 
// output :90 (90 - 3)
#include<stdio.h>
#include<stdlib.h> // Required for malloc and free

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = 0;

    // Handle edge case where array might be empty
    if(iLength == 0)
    {
        return 0;
    }

    // Initialize both iMax and iMin with the first element of the array
    iMax = Arr[0];
    iMin = Arr[0];

    // Traverse the array starting from the second element (index 1)
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        // Check for a new maximum
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
        // Check for a new minimum
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    // Return the difference between the largest and smallest number
    return iMax - iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    // Dynamic memory allocation based on user input size
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call the Difference function
    iRet = Difference(p, iSize);

    printf("Difference is %d\n", iRet);

    // Free allocated memory to prevent memory leaks
    free(p);

    return 0;
}