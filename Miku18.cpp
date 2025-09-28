a)#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    double y = 17 * pow(x, 2) - 6 * x + 13;
    std::cout << "Значение функции y = " << y << std::endl;
    return 0;
}

b)#include <iostream>
#include <cmath>

int main() {
    double a;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    double y = 3 * pow(a, 2) + 5 * a - 21;
    std::cout << "Значение функции y = " << y << std::endl;
    return 0;
}
