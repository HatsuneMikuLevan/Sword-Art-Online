

#include <iostream>

int main() {
    double a, b;
    std::cout << "Введите два различных вещественных числа: ";
    std::cin >> a >> b;

    double max_val = a;
    double min_val = a;

    if (b > a) {
        max_val = b;
    }
    if (a > b) {
        min_val = b;
    }

    std::cout << "Наибольшее число: " << max_val << std::endl;
    std::cout << "Наименьшее число: " << min_val << std::endl;

    return 0;
}
