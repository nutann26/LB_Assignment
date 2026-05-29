//3. write a program which accept number from user and display all its non factors.
// input : 12
// output : 5 7 8 9 10 11 

// input :13
// output : 2 3 4 5 6 7 8 9 10 11 12 

//input : 10
// output : 3 4 6 7 8 9 

#include <stdio.h>
void NonFact(int iNo)
{
    int i = 0;
// handle negative numbers by converting them to positive
 if (iNo < 0)
 {
    iNo = -iNo;
 }
 // loop through all numbers less than the input number
 for(i =1; i < iNo; i++)
 {

    // filter : check if 'i' is NOT a factor
    if ((iNo % i)  !=0)
    {
        printf("%d",i);

    }
 }
 printf("/n");

}
int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);
    return 0;
}