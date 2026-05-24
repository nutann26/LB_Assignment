#include<stdio.h>

void Display(int iNo)
{
    

    // the loop continous executing as long as iNo is greater than 0
    while( iNo > 0) 
    {
        printf("*");
        iNo--;         // Decrement the value of iNo by 1 in each pass 
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
