#include <iostream>

void compareNumbers(double a, double b) {
    if (a > b) {
        std::cout << "а) " << a << " больше, чем " << b << std::endl;
        std::cout << "б) " << b << " меньше, чем " << a << std::endl;
    } else {
        std::cout << "а) " << b << " больше, чем " << a << std::endl;
        std::cout << "б) " << a << " меньше, чем " << b << std::endl;
    }
}

int main() {
    double num1, num2;
    std::cout << "Введите два различных вещественных числа: ";
    std::cin >> num1 >> num2;
    compareNumbers(num1, num2);
    return 0;
}
