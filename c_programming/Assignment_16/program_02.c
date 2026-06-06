// Accept N number from user and return the smallest number.
// Input : N:

#include<stdio.h>
#include<stdlib.h> // Required for malloc and free

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;

    // Handle edge case where array might be empty
    if(iLength == 0)
    {
        return 0;
    }

    // Initialize iMin with the first element of the array
    iMin = Arr[0];

    // Traverse the array starting from the second element (index 1)
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        // If current element is smaller than our tracked minimum, update iMin
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0; 
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    // Dynamic memory allocation based on user input size
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call the Minimum function
    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d\n", iRet);

    // Free allocated memory to avoid memory leaks
    free(p);

    return 0;
}