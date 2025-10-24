#include <iostream>

int main() {
    double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    double max_val = (a > b) ? a : b;
    double min_val = (a < b) ? a : b;

    std::cout << "Максимальное значение: " << max_val << std::endl;
    std::cout << "Минимальное значение: " << min_val << std::endl;
    return 0;
}
