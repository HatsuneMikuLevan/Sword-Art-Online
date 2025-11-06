

#include <iostream>
#include <vector>
#include <algorithm>

void solve_6_46() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int temp_n = n;
    int max_digit = -1, min_digit = 10;
    int max_pos_start = -1, min_pos_start = -1;
    int max_pos_end = -1, min_pos_end = -1;
    int pos_from_end = 1;
    int total_digits = 0;

    std::vector<int> digits;
    if (n == 0) {
        digits.push_back(0);
    } else {
        while (temp_n > 0) {
            digits.push_back(temp_n % 10);
            temp_n /= 10;
        }
        std::reverse(digits.begin(), digits.end());
    }
    total_digits = digits.size();

    for (int i = 0; i < total_digits; ++i) {
        int digit = digits[i];
        if (digit > max_digit) {
            max_digit = digit;
            max_pos_start = i + 1;
        }
        if (digit < min_digit) {
            min_digit = digit;
            min_pos_start = i + 1;
        }
    }

    max_pos_end = total_digits - max_pos_start + 1;
    min_pos_end = total_digits - min_pos_start + 1;

    std::cout << "а) Порядковые номера от конца числа:" << std::endl;
    std::cout << "   Максимальная цифра " << max_digit << " имеет номер " << max_pos_end << std::endl;
    std::cout << "   Минимальная цифра " << min_digit << " имеет номер " << min_pos_end << std::endl;

    std::cout << "б) Порядковые номера от начала числа:" << std::endl;
    std::cout << "   Максимальная цифра " << max_digit << " имеет номер " << max_pos_start << std::endl;
    std::cout << "   Минимальная цифра " << min_digit << " имеет номер " << min_pos_start << std::endl;
}

int main() {
    solve_6_46();
    return 0;
}
