

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void solve() {
    std::string n_str;
    std::cout << "Введите натуральное число с различными цифрами: ";
    std::cin >> n_str;

    if (n_str.length() < 2) {
        std::cout << "Число должно содержать как минимум две цифры." << std::endl;
        return;
    }

    int max1 = -1, max2 = -1;
    int max1_pos_start = -1, max2_pos_start = -1;
    int min1 = 10, min2 = 10;
    int min1_pos_start = -1, min2_pos_start = -1;

    for (int i = 0; i < n_str.length(); ++i) {
        int digit = n_str[i] - '0';

        // Нахождение двух максимальных цифр и их позиций
        if (digit > max1) {
            max2 = max1;
            max2_pos_start = max1_pos_start;
            max1 = digit;
            max1_pos_start = i + 1;
        } else if (digit > max2) {
            max2 = digit;
            max2_pos_start = i + 1;
        }

        // Нахождение двух минимальных цифр и их позиций
        if (digit < min1) {
            min2 = min1;
            min2_pos_start = min1_pos_start;
            min1 = digit;
            min1_pos_start = i + 1;
        } else if (digit < min2) {
            min2 = digit;
            min2_pos_start = i + 1;
        }
    }

    // Вывод результатов
    std::cout << "а) Порядковые номера двух максимальных цифр:" << std::endl;
    std::cout << "   - от конца числа: " << n_str.length() - max1_pos_start + 1 << " и " << n_str.length() - max2_pos_start + 1 << std::endl;
    std::cout << "   - от начала числа: " << max1_pos_start << " и " << max2_pos_start << std::endl;
    std::cout << "б) Порядковые номера двух минимальных цифр:" << std::endl;
    std::cout << "   - от конца числа: " << n_str.length() - min1_pos_start + 1 << " и " << n_str.length() - min2_pos_start + 1 << std::endl;
    std::cout << "   - от начала числа: " << min1_pos_start << " и " << min2_pos_start << std::endl;
}

int main() {
    solve();
    return 0;
}
