

#include <iostream>

void solve679() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 10) {
        std::cout << "Последовательность цифр упорядочена по неубыванию справа налево: да" << std::endl;
        return;
    }

    bool is_non_decreasing = true;
    int prev_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit < prev_digit) {
            is_non_decreasing = false;
            break;
        }
        prev_digit = current_digit;
        n /= 10;
    }

    std::cout << "Последовательность цифр упорядочена по неубыванию справа налево: " << (is_non_decreasing ? "да" : "нет") << std::endl;
}
