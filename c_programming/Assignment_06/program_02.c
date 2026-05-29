// Accept single digit number from user and print it into word.
// input : 9
//output : Nine

// input : -3
//output : three

// input : 12 
// output : invalid number 

#include<stdio.h>

void Display(int iNo)
{
    // Updater: Convert negative single-digits to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Filter: If the number is greater than 9, it is not a single digit
    if (iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    // Switch case to convert digit to word
    switch(iNo)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}