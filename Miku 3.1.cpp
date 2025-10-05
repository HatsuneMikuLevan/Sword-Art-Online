#include <iostream>

int main() {
    int centimeters;
    std::cout << "Введите расстояние в сантиметрах: ";
    std::cin >> centimeters;
    int meters = centimeters / 100;
    std::cout << "Число полных метров: " << meters << std::endl;
    return 0;
}
