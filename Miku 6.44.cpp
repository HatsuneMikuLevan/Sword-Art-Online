

#include <iostream>
#include <algorithm>

void solve_644() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Число должно быть натуральным." << std::endl;
        return;
    }

    int temp_n = n;
    int max_digit = -1;
    int min_digit = 10;

    if (temp_n == 0) {
        max_digit = min_digit = 0;
    } else {
        while (temp_n > 0) {
            int digit = temp_n % 10;
            max_digit = std::max(max_digit, digit);
            min_digit = std::min(min_digit, digit);
            temp_n /= 10;
        }
    }

    int diff_digits = max_digit - min_digit;
    if (diff_digits % 2 == 0) {
        std::cout << "Разность максимальной и минимальной цифр (" << diff_digits << ") является четным числом." << std::endl;
    } else {
        std::cout << "Разность максимальной и минимальной цифр (" << diff_digits << ") является нечетным числом." << std::endl;
    }
}
