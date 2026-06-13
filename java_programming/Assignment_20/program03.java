//3. write a program to check whether a number is a perfect number or not.
class Logic
{
    void checkPerfect(int num)
    {
        int sum = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum += i;
            }
        }

        if(sum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is Not a Perfect Number");
        }
    }
}

class Program03
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}