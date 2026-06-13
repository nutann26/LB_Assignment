//2. write a program to print all even number up to N.
class Logic
{
    void printEvenNumbers(int n)
    {
        for(int i = 2; i <= n; i += 2)
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
        obj.printEvenNumbers(20);
    }
}
