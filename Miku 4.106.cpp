

#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    if (b >= 0 && sqrt(b) < a) {
        b *= 5.0;
    }

    std::cout << "Результат: " << b << std::endl;

    return 0;
}
