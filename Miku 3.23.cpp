#include <iostream>

int main() {
    int number;
    std::cout << "Введите трехзначное число: ";
    std::cin >> number;
    int last_digit = number % 10;
    int remaining_part = number / 10;
    int new_number = last_digit * 100 + remaining_part;
    std::cout << "Полученное число: " << new_number << std::endl;
    return 0;
}
