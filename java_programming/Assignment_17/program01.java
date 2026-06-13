class Logic {
    void sumOfDigits(int num) {
        int sum = 0;
        int temp = num; // Use a temporary variable to keep the original input intact

        while (temp > 0) {
            int digit = temp % 10; // Extract the last digit
            sum += digit;          // Add to the sum
            temp /= 10;            // Remove the last digit
        }

        System.out.println("The sum of digits for " + num + " is: " + sum);
    }
}

class Program01{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.sumOfDigits(1234); // Output will be 10
    }
}