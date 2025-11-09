

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три различных вещественных числа: ";
    std::cin >> a >> b >> c;

    double max_val = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    double min_val = (a < b ? a : b) < c ? (a < b ? a : b) : c;

    std::cout << "Максимальное значение: " << max_val << std::endl;
    std::cout << "Минимальное значение: " << min_val << std::endl;

    return 0;
}
