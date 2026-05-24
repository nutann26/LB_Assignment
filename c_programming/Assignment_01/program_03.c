#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
// Loop runs as long as i is greater than or equal to 1
       while(i >= 1)
       {
           printf("%d\n",i);
           i--; // changed from templete's 'i++' to 'i--' to correct count downwords 
       }

}
int main()
{
    Display();
    
    return 0;
    
} 