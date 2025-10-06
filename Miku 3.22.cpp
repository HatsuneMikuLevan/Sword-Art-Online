#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число: ";
    std::cin >> n;
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    int new_n = tens * 100 + units * 10 + hundreds;
    std::cout << "Полученное число: " << new_n << std::endl;
    return 0;
}
