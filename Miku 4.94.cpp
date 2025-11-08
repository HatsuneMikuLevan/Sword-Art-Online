

#include <iostream>
#include <string>

int main() {
    int k;
    std::cout << "Введите k (1 <= k <= 180): ";
    std::cin >> k;

    if (k < 1 || k > 180) {
        std::cout << "Некорректное значение k." << std::endl;
        return 1;
    }

    int number_index = (k - 1) / 2;
    int number = 10 + number_index;
    int digit_position = (k - 1) % 2;

    int result_digit;
    if (digit_position == 0) {
        result_digit = number / 10;
    } else {
        result_digit = number % 10;
    }

    std::cout << "k-я цифра: " << result_digit << std::endl;

    return 0;
}
