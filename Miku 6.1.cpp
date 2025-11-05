

#include <iostream>

void solve_6_1() {
    int a, b;
    std::cout << "Введите два натуральных числа a и b (a > b): ";
    std::cin >> a >> b;

    int quotient = 0;
    int temp_a = a;

    while (temp_a >= b) {
        temp_a -= b;
        quotient++;
    }

    int remainder = temp_a;

    std::cout << "a) Результат целочисленного деления: " << quotient << std::endl;
    std::cout << "б) Остаток от деления: " << remainder << std::endl;
}
