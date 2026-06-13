//5. write a program to check whether a number is positive,negative,or zero. 
class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println(num + " is Positive");
        }
        else if(num < 0)
        {
            System.out.println(num + " is Negative");
        }
        else
        {
            System.out.println("The number is Zero");
        }
    }
}

class Program05
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}