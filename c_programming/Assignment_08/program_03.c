//3. write a program which accept distance in (1 kilometer = 1000 meter)
//input : 5
//output:5000

//input:12
//output:12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometer : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}