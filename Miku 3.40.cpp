#include <iostream>

int main() {
    int result = 654;
    
    
    int a = result % 10;
    
   
    int b = (result / 10) % 10;
    .
    int c = result / 100;
    
   
    int x = 100 * a + 10 * b + c;
    
    std::cout << "Исходное число x: " << x << std::endl;
    
    return 0;
}
