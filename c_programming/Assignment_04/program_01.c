#include<stdio.h>
int MultFact(int iNo)
{
    int iMult = 1;
    int i = 0;

    // handle negative numbers by converting to positive
    if (iNo < 0)
    {
       iNo = -iNo; 
    }

    // A number's proper factors will never exceed half of its value
    for(i =1; i <=(iNo /2); i++)
    {
       // check if 'i' is a factor
       if ((iNo % i) == 0)
       {
           iMult = iMult * i;
       }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d\n",iRet);

    return 0;
}