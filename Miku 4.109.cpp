

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три вещественных числа: ";
    std::cin >> a >> b >> c;

    std::cout << "Числа из интервала [1.6, 3.8]: ";
    if (a >= 1.6 && a <= 3.8) {
        std::cout << a << " ";
    }
    if (b >= 1.6 && b <= 3.8) {
        std::cout << b << " ";
    }
    if (c >= 1.6 && c <= 3.8) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
