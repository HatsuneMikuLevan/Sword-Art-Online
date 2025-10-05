#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите длину первого катета: ";
    std::cin >> a;
    std::cout << "Введите длину второго катета: ";
    std::cin >> b;

    c = sqrt(a*a + b*b);

    std::cout << "Длина гипотенузы: " << c << std::endl;
    return 0;
}
