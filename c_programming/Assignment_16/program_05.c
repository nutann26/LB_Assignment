//5.Accept N numbers from user and display summation of digits of each number.
// Input N : 6
// Elements : 82225 665 3 76 953 858
// output : 17 17 3  13 17 21
 #include<stdio.h>
#include<stdlib.h> // Required for malloc and free

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iNo = 0;
    int iDigitSum = 0;

    // Handle edge case where array might be empty
    if(iLength == 0)
    {
        return;
    }

    // Traverse each element of the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Copy the original array element to a temporary variable
        iNo = Arr[iCnt];
        iDigitSum = 0;

        // Handle negative numbers if any by converting to absolute value
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        // Extract and sum digits
        while(iNo > 0)
        {
            iDigitSum = iDigitSum + (iNo % 10); // Extract the last digit and add to sum
            iNo = iNo / 10;                     // Remove the last digit
        }

        // Display the summation of digits followed by a tab space
        printf("%d\t", iDigitSum);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    // Call the DigitsSum function to display results
    DigitsSum(p, iSize);

    // Free dynamically allocated memory to prevent memory leaks
    free(p);

    return 0;
}