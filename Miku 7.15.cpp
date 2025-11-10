

#include <iostream>

int main() {
    double sum = 0.0;
    double a;
    std::cout << "Введите последовательность вещественных чисел (0 для завершения):" << std::endl;
    while (std::cin >> a && a != 0.0) {
        sum += a;
    }
    if (sum > 100.78) {
        std::cout << "Да, сумма превышает 100.78" << std::endl;
    } else {
        std::cout << "Нет, сумма не превышает 100.78" << std::endl;
    }
    return 0;
}
