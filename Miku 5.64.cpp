

#include <iostream>

int main() {
    int number;
    std::cout << "Введите семизначное число: ";
    std::cin >> number;
    int reversed_number = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }
    std::cout << "Число, полученное при прочтении справа налево: " << reversed_number << std::endl;
    return 0;
}
