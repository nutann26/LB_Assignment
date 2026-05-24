#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    
    // Filter to handle negative numbers by converting them to positive
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    // Loop runs from 1 to half of the number
    for(i = 1; i <= iNo / 2; i++)
    {
        // Condition to verify if 'i' is a perfect factor
        if(iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}
    
