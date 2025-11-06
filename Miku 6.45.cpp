

#include <iostream>
#include <string>
#include <algorithm>

void solve_645() {
    int n;
    std::cout << "Введите натуральное число n с различными цифрами: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Число должно быть натуральным." << std::endl;
        return;
    }

    std::string s = std::to_string(n);
    int max_digit = -1;
    int min_digit = 10;

    for (char c : s) {
        int digit = c - '0';
        max_digit = std::max(max_digit, digit);
        min_digit = std::min(min_digit, digit);
    }

    int max_pos_start = -1;
    int max_pos_end = -1;
    int min_pos_start = -1;
    int min_pos_end = -1;

    for (int i = 0; i < s.length(); ++i) {
        int digit = s[i] - '0';
        if (digit == max_digit) {
            max_pos_start = i + 1;
            max_pos_end = s.length() - i;
        }
        if (digit == min_digit) {
            min_pos_start = i + 1;
            min_pos_end = s.length() - i;
        }
    }

    std::cout << "а) Порядковый номер максимальной цифры (" << max_digit << "):" << std::endl;
    std::cout << "   - от конца числа: " << max_pos_end << std::endl;
    std::cout << "   - от начала числа: " << max_pos_start << std::endl;
    std::cout << "б) Порядковый номер минимальной цифры (" << min_digit << "):" << std::endl;
    std::cout << "   - от конца числа: " << min_pos_end << std::endl;
    std::cout << "   - от начала числа: " << min_pos_start << std::endl;
}
