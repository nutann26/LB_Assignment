class Logic {
    void checkPalindrome(int num) {
        int originalNum = num;
        int reversedNum = 0;
        int temp = num;

        // Logic to reverse the number
        while (temp > 0) {
            int digit = temp % 10;          // Extract the last digit
            reversedNum = (reversedNum * 10) + digit; // Build the reversed number
            temp /= 10;                     // Remove the last digit
        }

        // Check if the original number is equal to the reversed number
        if (originalNum == reversedNum) {
            System.out.println(num + " is a palindrome.");
        } else {
            System.out.println(num + " is not a palindrome.");
        }
    }
}

class Program02 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkPalindrome(121);  // Output: 121 is a palindrome
        obj.checkPalindrome(123);  // Output: 123 is not a palindrome
    }
}
