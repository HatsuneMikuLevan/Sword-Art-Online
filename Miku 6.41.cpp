

#include <iostream>
#include <algorithm>

void solve_6_41(int n) {
    if (n == 0) {
        std::cout << "a) Максимальная цифра: 0" << std::endl;
        std::cout << "б) Минимальная цифра: 0" << std::endl;
        return;
    }

    int temp_n = n;
    int max_digit = 0;
    int min_digit = 9;

    while (temp_n > 0) {
        int digit = temp_n % 10;
        max_digit = std::max(max_digit, digit);
        min_digit = std::min(min_digit, digit);
        temp_n /= 10;
    }

    std::cout << "a) Максимальная цифра: " << max_digit << std::endl;
    std::cout << "б) Минимальная цифра: " << min_digit << std::endl;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    solve_6_41(n);
    return 0;
}
