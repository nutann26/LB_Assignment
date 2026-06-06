//4.Accept N numbers from user and accept range, Display all elements from that range
// input : N: 6
// start : 60 
//Elements : 85 66 3 76 93 88
//output: 66 76 88

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    // Scan backwards from the last element (iLength - 1) down to 0
    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        // Check if current element matches the target number
        if(Arr[iCnt] == iNo)
        {
            return iCnt; // Return index immediately on discovery
        }
    }

    return -1; // Return -1 if the number is not found anywhere
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    // Accept the number target that needs checking
    printf("Enter the number you want to search: ");
    scanf("%d", &iValue);

    // Execute lookup verification
    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number. Result is %d\n", iRet);
    }
    else
    {
        printf("Last occurrence of number is at index : %d\n", iRet);
    }

    // Reclaim heap allocation block safely
    free(p);

    return 0;
}