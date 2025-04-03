/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int numDays;
    std::cout<< "Enter number of days: ";
    std::cin >> numDays;
    
    int numYears;
    int numWeeks;
    
    numYears = numDays/365;
    numDays = numDays % 365;
    
    numWeeks = numDays/7;
    numDays = numDays % 7;
    
    
    std::cout << numYears << " years, " 
                << numWeeks << "weeks, "
                << numDays << " days\n" ;
   

    return 0;
}