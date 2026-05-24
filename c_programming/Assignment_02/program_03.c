#include<stdio.h>

void Display(int iNo)
{
    // check if the input number is strictly less than 10
    if(iNo < 10)
    {
         printf("Hello\n");
    } 
    else
    {
        printf("Demo\n");
    }
} 
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0 ;
}