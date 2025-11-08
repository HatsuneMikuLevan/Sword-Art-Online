

#include <iostream>
#include <string>

int main() {
    int k;
    std::cout << "Введите k (1 <= k <= 222): ";
    std::cin >> k;

    if (k < 1 || k > 222) {
        std::cout << "Некорректное значение k." << std::endl;
        return 1;
    }

    int result_digit;

    if (k <= 9) {
        result_digit = k;
    } else if (k <= 9 + 180) {
        int k_adjusted = k - 9;
        int number_index = (k_adjusted - 1) / 2;
        int number = 10 + number_index;
        int digit_position = (k_adjusted - 1) % 2;
        if (digit_position == 0) {
            result_digit = number / 10;
        } else {
            result_digit = number % 10;
        }
    } else {
        int k_adjusted = k - (9 + 180);
        int number_index = (k_adjusted - 1) / 3;
        int number = 100 + number_index;
        int digit_position = (k_adjusted - 1) % 3;
        if (digit_position == 0) {
            result_digit = number / 100;
        } else if (digit_position == 1) {
            result_digit = (number / 10) % 10;
        } else {
            result_digit = number % 10;
        }
    }

    std::cout << "k-я цифра: " << result_digit << std::endl;

    return 0;
}
