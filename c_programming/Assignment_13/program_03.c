#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the number is even AND divisible by 5
        if(((Arr[iCnt] % 2) == 0) && ((Arr[iCnt] % 5) == 0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    // Filter for edge cases
    if(iSize <= 0)
    {
        printf("Invalid size entry.\n");
        return -1;
    }

    // Dynamic memory allocation
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    // Fixed template string to use iSize variable context
    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Function execution to extract matching numbers
    Display(p, iSize);

    // Free memory space block safely
    free(p);

    return 0;
}