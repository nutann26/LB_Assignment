#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0; // Fixed template typo 'int int = 0;' to a valid variable name
    
    // Filter to handle negative frequency test cases (e.g., converting -3 to 3)
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    // Loop runs exactly 'iFrequency' times
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    printf("Enter frequency: ");
    scanf("%d", &iCount);
    
    Display(iValue, iCount);
    
    return 0;
}