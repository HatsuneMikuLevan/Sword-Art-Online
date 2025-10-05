a)#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;
    z = 2 * pow(x, 3) - 3.44 * x * y + 2.3 * pow(x, 2) - 7.1 * y + 2;
    std::cout << "Значение функции z = " << z << std::endl;
    return 0;
}

b)#include <iostream>
#include <cmath>

int main() {
    double a, b, x;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;
    x = 3.14 * pow((a + b), 3) + 2.75 * pow(b, 2) - 12.7 * a - 4.1;
    std::cout << "Значение функции x = " << x << std::endl;
    return 0;
}
