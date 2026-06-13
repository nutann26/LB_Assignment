 // 4. write a program to find the sum of even and odd digits separately in a number.
 class Logic
{
    void sumEvenOddDigits(int num)
    {
        int evenSum = 0;
        int oddSum = 0;

        while(num > 0)
        {
            int digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum += digit;
            }
            else
            {
                oddSum += digit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits: " + evenSum);
        System.out.println("Sum of Odd Digits: " + oddSum);
    }
}

class Program04
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
    

