

#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три различных числа: ";
    std::cin >> a >> b >> c;

    double max_val = (a > b && a > c ? a : (b > c ? b : c));
    double product_of_two_smallest = (a * b * c) / max_val;

    std::cout << "Произведение двух наименьших чисел: " << product_of_two_smallest << std::endl;

    return 0;
}
