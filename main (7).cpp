/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main() {

    int num;
    std::cout << "Enter a Integer: ";
    std::cin >> num;
    
   
    while (num >= 10){
        int sum = 0;
        while (num > 0){
            sum += num % 10;
            num/= 10;
        }
        num = sum;
        
        std::cout << "Single-digit result: " << num << std::endl;
        
        
    }
    return 0;
}
