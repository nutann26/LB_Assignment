//4. accept N number from user and display all such elements which are divisible by 3 and 5.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements divisible by 3 and 5 are: ");
    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the number is divisible by 3 AND divisible by 5
        if(((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5) == 0))
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

    // Handle invalid or edge case array sizes gracefully
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

    // Corrected template context variable from iLength to iSize
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call the function to display matching numbers
    Display(p, iSize);

    // Free dynamically allocated memory block safely
    free(p);

    return 0;
}