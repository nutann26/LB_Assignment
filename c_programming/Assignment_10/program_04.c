//4.write a program which accept range from user and return addition of all even numbers in between that range.(range should contains positive numbers only)
// input : 23 30
// output : 108

// input : 10 18 
// output : 70

//input : -10 2
// output : invalid range 

//input : 90 18 
// output : invalid range


#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    // Logic
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}