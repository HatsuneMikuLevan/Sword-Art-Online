

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три различных вещественных числа: ";
    std::cin >> a >> b >> c;

    double min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }

    std::cout << "Наименьшее число: " << min_val << std::endl;

    return 0;
}
