

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три различных числа: ";
    std::cin >> a >> b >> c;

    double min_val = (a < b && a < c ? a : (b < c ? b : c));
    double sum_of_two_largest = a + b + c - min_val;

    std::cout << "Сумма двух наибольших чисел: " << sum_of_two_largest << std::endl;

    return 0;
}
