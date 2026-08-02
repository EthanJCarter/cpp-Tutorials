#include <iostream>

// function that declared int var x and returns it.
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
    return 0;
}