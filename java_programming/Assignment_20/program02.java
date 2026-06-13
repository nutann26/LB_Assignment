//2. write a program to print number from N down to 1 in reverse order.
class Logic
{
    void printReverse(int n)
    {
        for(int i = n; i >= 1; i--)
        {
            System.out.println(i);
        }
    }
}

class Program02
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}
