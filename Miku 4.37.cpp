#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите два целых числа a и b: ";
    std::cin >> a >> b;

    // Проверка, является ли a делителем b
    if (b % a == 0) {
        std::cout << a << " является делителем " << b << std::endl;
    } else {
        std::cout << a << " не является делителем " << b << std::endl;
    }

    // Проверка, является ли b делителем a
    if (a % b == 0) {
        std::cout << b << " является делителем " << a << std::endl;
    } else {
        std::cout << b << " не является делителем " << a << std::endl;
    }

    return 0;
}
