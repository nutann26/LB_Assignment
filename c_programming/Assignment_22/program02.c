//2. Accept number from user and display below pattern.
//Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

#include <stdio.h>

void Pattern(int iNo)
{
     int i;
     for(i = iNo; i>=1; i--)
     {
        printf("%d\t#\t",i);
     }
}
int main()
{
    int iValue = 0;
    printf("enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}