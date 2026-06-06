#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements multiple of 11 are : ");
    // Loop through the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the number is perfectly divisible by 11
        if((Arr[iCnt] % 11) == 0)
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

    printf("Enter number of elements : ");
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

    // Bugfix: Changed template's 'iLength' to 'iSize' inside main context
    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Execute logic wrapper block
    Display(p, iSize);

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}