#include <iostream>

int main() {
    int m, n;
    std::cout << "Введите два целых числа m и n: ";
    std::cin >> m >> n;

    if (n == 0) {
        std::cout << "Деление на ноль невозможно." << std::endl;
    } else if (m % n == 0) {
        std::cout << "Частное от деления: " << m / n << std::endl;
    } else {
        std::cout << "m на n нацело не делится" << std::endl;
    }

    return 0;
}
