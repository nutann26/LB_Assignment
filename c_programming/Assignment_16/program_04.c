//4. Accept N number from user and display all such numbers which contains 3 digits in it.
//Input : N : 6 
// Elements: 8225 665 3 76 953 858
// output : 665 953 858

#include<stdio.h>
#include<stdlib.h> // Required for malloc and free

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    // Handle edge case where array might be empty
    if(iLength == 0)
    {
        return;
    }

    printf("Numbers containing 3 digits are: \n");

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check if the number is a positive or negative 3-digit number
        if((Arr[iCnt] >= 100 && Arr[iCnt] <= 999) || (Arr[iCnt] <= -100 && Arr[iCnt] >= -999))
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

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    // Dynamic memory allocation
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

    // Call the Digits function to display the 3-digit numbers
    Digits(p, iSize);

    // Free allocated memory
    free(p);

    return 0;
}