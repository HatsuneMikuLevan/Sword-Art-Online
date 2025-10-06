#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число: ";
    std::cin >> n;
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    std::cout << "а) Число единиц: " << units << std::endl;
    std::cout << "б) Число десятков: " << tens << std::endl;
    std::cout << "в) Сумма его цифр: " << hundreds + tens + units << std::endl;
    std::cout << "г) Произведение его цифр: " << hundreds * tens * units << std::endl;
    return 0;
}
