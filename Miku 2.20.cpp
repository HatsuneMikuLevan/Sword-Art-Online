#include <iostream>
#include <cmath>

int main() {
    double e, f, g, h, a, b, c;
    std::cout << "Введите значение e: ";
    std::cin >> e;
    std::cout << "Введите значение f: ";
    std::cin >> f;
    std::cout << "Введите значение g: ";
    std::cin >> g;
    std::cout << "Введите значение h: ";
    std::cin >> h;

    a = sqrt(pow(abs(e - 3.0 / f), 3.0) + g);
    b = sin(e) + pow(cos(h), 2.0);
    c = (33.0 * g) / (e * f - 3.0);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}
