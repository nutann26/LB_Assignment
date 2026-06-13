// 1. write a program to check whether a number is prime or not

class Logic
{
    void checkPrime(int num)
    {
        boolean isPrime = true;

        if (num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            System.out.println(num + " is a Prime Number");
        }
        else
        {
            System.out.println(num + " is Not a Prime Number");
        }
    }
}

class Program01
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}