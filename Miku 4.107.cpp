

#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    std::cout << "Четные числа: ";
    if (a % 2 == 0) {
        std::cout << a << " ";
    }
    if (b % 2 == 0) {
        std::cout << b << " ";
    }
    if (c % 2 == 0) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
