
#include <iostream>

// Способ 1: Итеративный
int multiply_iterative(int x, int y) {
    int result = 0;
    for (int i = 0; i < y; ++i) {
        result += x;
    }
    return result;
}

// Способ 2: Рекурсивный
int multiply_recursive(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x + multiply_recursive(x, y - 1);
}

int main() {
    int x, y;
    std::cout << "Введите натуральное число x: ";
    std::cin >> x;
    std::cout << "Введите натуральное число y: ";
    std::cin >> y;
    std::cout << "Произведение x*y (итеративно): " << multiply_iterative(x, y) << std::endl;
    std::cout << "Произведение x*y (рекурсивно): " << multiply_recursive(x, y) << std::endl;
    return 0;
}
