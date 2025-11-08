

#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Введите четыре различных вещественных числа: ";
    std::cin >> a >> b >> c >> d;

    double min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }
    if (d < min_val) {
        min_val = d;
    }

    std::cout << "Наименьшее число: " << min_val << std::endl;

    return 0;
}
