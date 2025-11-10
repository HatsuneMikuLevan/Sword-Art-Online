

#include <iostream>

int main() {
    int sum = 0;
    int a;
    std::cout << "Введите последовательность целых чисел (0 для завершения):" << std::endl;
    while (std::cin >> a && a != 0) {
        sum += a;
    }
    if (sum % 2 == 0) {
        std::cout << "Да, сумма является четным числом" << std::endl;
    } else {
        std::cout << "Нет, сумма является нечетным числом" << std::endl;
    }
    return 0;
}
