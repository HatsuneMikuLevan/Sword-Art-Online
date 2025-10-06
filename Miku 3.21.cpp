#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число: ";
    std::cin >> n;
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    int reversed_n = units * 100 + tens * 10 + hundreds;
    std::cout << "Число, прочитанное справа налево: " << reversed_n << std::endl;
    return 0;
}
