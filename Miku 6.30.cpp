#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите натуральные числа a и b: ";
    std::cin >> a >> b;
    int quotient = 0;
    int temp_b = b;
    while (temp_b >= a) {
        temp_b -= a;
        quotient++;
    }
    std::cout << "Результат целочисленного деления b на a: " << quotient << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите натуральные числа a и b: ";
    std::cin >> a >> b;
    int remainder = b;
    while (remainder >= a) {
        remainder -= a;
    }
    std::cout << "Остаток от деления b на a: " << remainder << std::endl;
    return 0;
}
