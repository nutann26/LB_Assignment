//1.Accept number from user and display below pattern.
//Input : 5
//output : A B C D E

#include <stdio.h>
void pattern(int iNo)
{
    char ch;
    for (ch = 'A'; ch<'A'+iNo; ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
     int iValue = 0;
     printf("enter number of elements:");
     scanf("%d",&iValue);

     pattern(iValue);
     return 0;
}