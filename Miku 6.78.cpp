

#include <iostream>

void solve678() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 10) {
        std::cout << "Последовательность цифр упорядочена по возрастанию справа налево: да" << std::endl;
        return;
    }

    bool is_ordered = true;
    int prev_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit <= prev_digit) {
            is_ordered = false;
            break;
        }
        prev_digit = current_digit;
        n /= 10;
    }

    std::cout << "Последовательность цифр упорядочена по возрастанию справа налево: " << (is_ordered ? "да" : "нет") << std::endl;
}
