#include <iostream>

int main() {
    int a1, a2, b;
    std::cout << "Введите цифру единиц двузначного числа (a1): ";
    std::cin >> a1;
    std::cout << "Введите цифру десятков двузначного числа (a2): ";
    std::cin >> a2;
    std::cout << "Введите однозначное число (b): ";
    std::cin >> b;

    int sum = (a2 * 10 + a1) + b;
    int sum_tens = sum / 10;
    int sum_units = sum % 10;

    std::cout << "Цифра десятков суммы: " << sum_tens << std::endl;
    std::cout << "Цифра единиц суммы: " << sum_units << std::endl;

    return 0;
}
