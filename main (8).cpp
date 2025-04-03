/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    double length, width, area;
    
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    
    std:: cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    
    area = length * width; 
    
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}