#include <iostream>

// function that declares int var x and returns it.
int declareIntVar()
{
    int x = 42; // declare variable named x as an integer.
    return x;
}

// main function, calls declareIntVar() and prints value of x.
int main()
{
    int x = declareIntVar();
    // again, using stream output format here.
    std::cout << "x is: " << x;

    // below are some initialisation methods.

    // default
    int a;
    a = 1;

    // copy
    int b = 2;

    // direct initialisation
    int c ( 3 );

    // direct list initialisation
    int d {4};
    
    std::cout << "\na is: " << a << "\n";
    std::cout << "b is: " << b << "\n";
    std::cout << "c is: " << c << "\n";
    std::cout << "d is: " << d << "\n";
    return 0;
}   