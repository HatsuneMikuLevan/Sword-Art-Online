#include <iostream>

int main() {
    double side;
    std::cout << "Введите длину стороны квадрата: ";
    std::cin >> side;
    double perimeter = 4 * side;
    std::cout << "Периметр квадрата равен: " << perimeter;
    
}
