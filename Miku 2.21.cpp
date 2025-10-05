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

    a = (e + f / 2.0) / 3.0;
    b = abs(h * h - g);
    c = sqrt(pow(g - h, 2.0) - 3.0 * sin(e));

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}
