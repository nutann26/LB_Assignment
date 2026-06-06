//1.Accept N numbers from user and return the largest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// output:93 

#include<stdio.h>
#include<stdlib.h> // Required for malloc and free

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    // Handle edge case where array might be empty
    if(iLength == 0)
    {
        return 0;
    }

    // Initialize iMax with the first element of the array
    iMax = Arr[0];

    // Traverse the array starting from the second element (index 1)
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        // If current element is larger than our tracked maximum, update iMax
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    // Call the Maximum function
    iRet = Maximum(p, iSize);

    printf("Largest Number is %d\n", iRet);

    // Free allocated memory to prevent memory leaks
    free(p);

    return 0;
}