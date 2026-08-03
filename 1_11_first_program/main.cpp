// Simple program to add two numbers
#include <iostream>

// Basic function that takes two ints and returns their sum.
int addValues(int(a), int(b))
{
    return a + b;
}

/* 
main function, calls addValues and prints sum of two numbers
accepted from user input prompted in terminal.
*/
int main()
{
    std::cout << "Enter two numbers to add: \n";
    
    // accept input from user through cin stream.
    int num1{};
    std::cin >> num1;
    
    int num2{};
    std::cin >> num2;

    int sum = addValues(num1, num2);

    //output values
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << "\n";

    return 0;
}
