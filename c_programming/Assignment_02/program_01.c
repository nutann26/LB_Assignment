#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // the loop start at 0 and increments until it hits iNo
    while( iCnt < iNo) 
    {
        printf("*");
        iCnt++; // Loop Updator 
    } 
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue); 

    Display(iValue);
    return 0; 
}
