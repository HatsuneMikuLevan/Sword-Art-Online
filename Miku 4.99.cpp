#include <iostream>

int main() {
    double a, b;
    std::cout << "Введите два различных вещественных числа: ";
    std::cin >> a >> b;

    double max_val = a;
    if (b > a) max_val = b;

    std::cout << "Наибольшее число: " << max_val << std::endl;

    return 0;
}
