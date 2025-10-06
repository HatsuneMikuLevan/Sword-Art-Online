#include <iostream>

int main() {
    int number;
    std::cout << "Введите трехзначное число: ";
    std::cin >> number;
    int d1 = number / 100;
    int d2 = (number / 10) % 10;
    int d3 = number % 10;
    int new_number = d2 * 100 + d1 * 10 + d3;
    std::cout << "Полученное число: " << new_number << std::endl;
    return 0;
}
