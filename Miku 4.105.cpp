

#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    if (std::abs(a) > std::abs(b)) {
        a /= 2.0;
    }

    std::cout << "Результат: " << a << std::endl;

    return 0;
}
