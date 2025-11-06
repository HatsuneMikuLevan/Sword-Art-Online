

#include <iostream>
#include <vector>
#include <algorithm>

void solve_6_47() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int temp_n = n;
    int max_digit = -1, min_digit = 10;
    int max_pos_start = -1, min_pos_start = -1;
    int pos_from_start = 1;

    if (n == 0) {
        max_digit = 0; min_digit = 0;
        max_pos_start = 1; min_pos_start = 1;
    } else {
        std::vector<int> digits;
        while (temp_n > 0) {
            digits.push_back(temp_n % 10);
            temp_n /= 10;
        }
        std::reverse(digits.begin(), digits.end());

        for (int i = 0; i < digits.size(); ++i) {
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
    }

    if (max_pos_start < min_pos_start) {
        std::cout << "Левее расположена максимальная цифра: " << max_digit << std::endl;
    } else {
        std::cout << "Левее расположена минимальная цифра: " << min_digit << std::endl;
    }
}

int main() {
    solve_6_47();
    return 0;
}
