/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int dayNum;
    std::cout << "Enter day number of the week - 1 for Sun,...,7 for Sat:" ;
    std::cin >> dayNum;
    
    switch(dayNum) {
        case 1: std:: cout << "Sunday \n";
        break;
        case 2: std:: cout << "Monday \n";
        break;
        case 3: std:: cout << "Tuesday \n";
        break;
        case 4: std:: cout << "Wednesday \n";
        break;
        case 5: std:: cout << "Thursday \n";
        break;
        case 6: std:: cout << "Friday \n";
        break;
        case 7: std:: cout << "Saturday\n";
        break;
        default: std:: cout << "Wrong input - enter a value 1-7 \n";
        break;
        
        
    }
    return 0;
}