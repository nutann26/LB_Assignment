class Logic{
    void findMax(int a, int b) {
        // Compare the two numbers
        if (a > b) {
            System.out.println("The maximum number is: " + a);
        } else if (b > a) {
            System.out.println("The maximum number is: " + b);
        } else {
            System.out.println("Both numbers are equal: " + a);
        }
    }
}

class Program03 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findMax(20, 15); // Output: The maximum number is: 20
    }
}
