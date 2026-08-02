/*
Simple first program.
*/

// import library iostream, which is "input/ouput stream"
#include <iostream> 

// int main is standard; similar to implicit none holdover from fortran
int main()
{
    // std:cout is standard character output. '<<' is a stream input (like piping in bash sort of?)
    std::cout << "Hello World!";
    
    // return 0; is an exit command meaning 'program is complete'. return 1; would do the opposite (exited unsuccessfully)
    return 0;
}