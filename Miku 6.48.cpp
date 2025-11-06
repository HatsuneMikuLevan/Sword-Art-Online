
#include <iostream>
#include <vector>
#include <algorithm>

void solve_6_48() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int temp_n = n;
    int max_odd_digit = -1;
    int min_digit = 10;
    int min_pos_start = -1;
    int pos_from_start = 1;

    if (n == 0) {
        min_digit = 0;
        min_pos_start = 1;
    } else {
        std::vector<int> digits;
        while (temp_n > 0) {
            digits.push_back(temp_n % 10);
            temp_n /= 10;
        }
        std::reverse(digits.begin(), digits.end());

        for (int i = 0; i < digits.size(); ++i) {
            int digit = digits[i];
            if (digit % 2 != 0 && digit > max_odd_digit) {
                max_odd_digit = digit;
            }
            if (digit < min_digit) {
                min_digit = digit;
                min_pos_start = i + 1;
            }
        }
    }

    std::cout << "а) Максимальная нечетная цифра: ";
    if (max_odd_digit != -1) {
        std::cout << max_odd_digit << std::endl;
    } else {
        std::cout << "Нечетных цифр нет" << std::endl;
    }

    std::cout << "б) Номер минимальной цифры при счете слева направо: " << min_pos_start << std::endl;
}

int main() {
    solve_6_48();
    return 0;
}
