// 3. write a program which accept number from user and print even factor of that number.
 //Input :36
 // output:2 6 12 18


#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    // loop runs up to half the number
    for(i =1; i<=iNo / 2; i++)
    {
        //check if i is a factor AND if i is even
        if ((iNo % i==0) && (i % 2 ==0))
        {
            printf ("%d\t", i);
        }
    }
}


int main()
{
     int iValue = 0;
     printf("Enter number\n");
     scanf("%d", &iValue);
     
     // functoin call 
     DisplayEvenFactor(iValue);
     return 0 ;
}