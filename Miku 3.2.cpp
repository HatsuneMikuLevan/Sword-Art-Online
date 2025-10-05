#include <iostream>

int main() {
    int kilograms;
    std::cout << "Введите массу в килограммах: ";
    std::cin >> kilograms;
    int centners = kilograms / 100;
    std::cout << "Число полных центнеров: " << centners << std::endl;
    return 0;
}
