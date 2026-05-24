#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    // the loop intialization at 1 and stop exactly when it hits iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        printf("*");
    }
    printf("\n"); // optional : adds a newline at the end for clean formatting
}
int main()
{
    int iValue = 0;
    iValue = 5;  // harcoded to 5 based on template,but can accept user input via scanf
    
    Accept(iValue);
    return 0;
} 