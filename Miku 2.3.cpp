a)#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите значение a: ";
    std::cin >> a;

    double g = 2 * a + std::sin(3 * a);
    if (g < 0) {
        std::cout << "Ошибка: Подкоренное выражение отрицательно, функция не определена для данного a" << std::endl;
        return 1;
    }

    double y = std::sqrt(g) / 3.56;

    std::cout << "Значение функции y = " << std::fixed << std::setprecision(4) << y;

    return 0;
}
b)#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    if (1 + x < 0) {
        std::cout << "Ошибка: Подкоренное выражение (1+x) отрицательно, функция не определена" << std::endl;
        return 1;
    }
    if (x == 0) {
        std::cout << "Ошибка: Знаменатель равен нулю, функция не определена для x=0" << std::endl;
        return 1;
    }

    double z = std::sin(3.2 + std::sqrt(1 + x)) / (5 * x);

    std::cout << "Значение функции z = " << std::fixed << std::setprecision(4) << z;

    return 0;
}
