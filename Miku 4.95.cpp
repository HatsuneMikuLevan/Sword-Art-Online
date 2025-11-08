

#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Введите n (1 <= n <= 32): ";
    std::cin >> n;

    if (n < 1 || n > 32) {
        std::cout << "Некорректное значение n." << std::endl;
        return 1;
    }

    if (n == 1) {
        std::cout << "n-я цифра: 0" << std::endl;
        return 0;
    }

    n--; // Учитываем, что 0 - это первая цифра

    if (n <= 9) { // Цифры от 1 до 9
        std::cout << "n-я цифра: " << n << std::endl;
    } else { // Цифры от 10 до 20
        n -= 9;
        int number_index = (n - 1) / 2;
        int number = 10 + number_index;
        int digit_position = (n - 1) % 2;

        int result_digit;
        if (digit_position == 0) {
            result_digit = number / 10;
        } else {
            result_digit = number % 10;
        }
        std::cout << "n-я цифра: " << result_digit << std::endl;
    }

    return 0;
}
