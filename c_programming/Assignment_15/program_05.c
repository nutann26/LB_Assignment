//5.Accept N number from user and return product of all odd elements.
// Input: N : 6
// Elements : 15 66 3 70 10 88
// output : 45
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements within the range are : ");
    // Traverse the dynamically allocated array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the current element falls within the boundaries [iStart, iEnd]
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]); // Print matching numbers separated by tabs
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; // Fixed duplicate variable declaration bug from layout
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

    // Accept range boundaries from user
    printf("Enter the starting point of range : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point of range : ");
    scanf("%d", &iValue2);

    // Execute range display wrapper logic
    Range(p, iSize, iValue1, iValue2);

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}