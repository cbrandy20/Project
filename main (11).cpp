/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
int main()
{
    std::string phrase = "Able was I ere I saw Elba";
    char ch;
    std::cout << "Enter the character whose first occurrence will be removed: ";
    std::cin >> ch;
    
    int pos = phrase.find(ch);
    phrase.erase(pos,1);
    
    std::cout << phrase << std::endl;
    
    return 0;
}