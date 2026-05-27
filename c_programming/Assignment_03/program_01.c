#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    // Filter to handle invalid or zero inputs safely
    if(iNo <= 0)
    {
        return;
    }
    
    //  Loop runs exactly iNo times to print successive even numbers
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}