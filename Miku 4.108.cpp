

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три вещественных числа: ";
    std::cin >> a >> b >> c;

    if (a >= 0) {
        a = a * a;
    }
    if (b >= 0) {
        b = b * b;
    }
    if (c >= 0) {
        c = c * c;
    }

    std::cout << "Результат: " << a << " " << b << " " << c << std::endl;

    return 0;
}
