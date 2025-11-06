

#include <iostream>

void solve682() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 10) {
        std::cout << "Последовательность цифр упорядочена по неубыванию слева направо: да" << std::endl;
        return;
    }

    int reversed_n = 0;
    int temp = n;
    while (temp > 0) {
        reversed_n = reversed_n * 10 + temp % 10;
        temp /= 10;
    }

    bool is_non_decreasing = true;
    int prev_digit = reversed_n % 10;
    reversed_n /= 10;
    while (reversed_n > 0) {
        int current_digit = reversed_n % 10;
        if (current_digit < prev_digit) {
            is_non_decreasing = false;
            break;
        }
        prev_digit = current_digit;
        reversed_n /= 10;
    }

    std::cout << "Последовательность цифр упорядочена по неубыванию слева направо: " << (is_non_decreasing ? "да" : "нет") << std::endl;
}
