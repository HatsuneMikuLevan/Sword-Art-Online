

#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    int sum = 0;
    if (a > 0) {
        sum += a;
    }
    if (b > 0) {
        sum += b;
    }
    if (c > 0) {
        sum += c;
    }

    std::cout << "Сумма положительных чисел: " << sum << std::endl;

    return 0;
}
