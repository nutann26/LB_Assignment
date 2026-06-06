#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;

    // Loop through the array to check each element
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // If remainder is 0 when divided by 2, it is an even number
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++;
        }
    }

    return iEvenCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    // Handle invalid size scenario gracefully
    if(iSize <= 0)
    {
        printf("Invalid number of elements.\n");
        return -1;
    }

    // Dynamic memory allocation
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call function to count even numbers
    iRet = CountEven(p, iSize);

    printf("Result is : %d\n", iRet);

    // Free dynamically allocated memory
    free(p);

    return 0;
}