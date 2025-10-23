#include <iostream>

int main() {
    
    int a2 = 3; 
    int a1 = 5;
    
  
    int b2 = 4; 
    int b1 = 2;
    
   
    int sum_of_units = a1 + b1;
    
    
    int c1 = sum_of_units % 10;
    int carry = sum_of_units / 10;
    

    int c2 = a2 + b2 + carry;
    

    std::cout << "Цифры суммы: " << c2 << " (десятки) и " << c1 << " (единицы)" << std::endl;
    
  
    int num1 = a2 * 10 + a1;
    int num2 = b2 * 10 + b1;
    int sum = num1 + num2;
    std::cout << "Проверка: " << num1 << " + " << num2 << " = " << sum << std::endl;
    
    return 0;
}
