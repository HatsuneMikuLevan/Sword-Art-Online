#include <iostream>
#include <iomanip>

int main() {
    double a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    double sum = a + b;
    double difference = a - b;
    double product = a * b;
    double quotient = a / b;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << difference << std::endl;
    std::cout << "Произведение: " << product << std::endl;
    std::cout << "Частное: " << quotient << std::endl;

    return 0;
}
