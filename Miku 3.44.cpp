#include <iostream>

int main() {
 
    int a3 = 1, a2 = 2, a1 = 3; 
    int b2 = 8, b1 = 7; 

   
    int c1 = (a1 + b1) % 10;
    int p1 = (a1 + b1) / 10;
    int c2 = (a2 + b2 + p1) % 10;
    int p2 = (a2 + b2 + p1) / 10;
    int c3 = a3 + p2;

    
    std::cout << "Цифры суммы: " << c3 << ", " << c2 << ", " << c1 << std::endl;

    return 0;
}
