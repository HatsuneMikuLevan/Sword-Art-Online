#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите три различных целых числа: ";
    std::cin >> a >> b >> c;

    // а) самое большое
    std::cout << "Самое большое число: " << (a > b && a > c ? a : (b > c ? b : c)) << std::endl;

    // б) самое маленькое
    std::cout << "Самое маленькое число: " << (a < b && a < c ? a : (b < c ? b : c)) << std::endl;

    // в) среднее
    std::cout << "Среднее число: " << (a > b && a < c  a < b && a > c ? a : (b > a && b < c  b < a && b > c ? b : c)) << std::endl;

    return 0;
}
