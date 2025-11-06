

#include <iostream>
#include <algorithm>

void solve_643() {
    int n, a;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;

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

    int sum_digits = max_digit + min_digit;
    if (a != 0 && sum_digits % a == 0) {
        std::cout << "Сумма максимальной и минимальной цифр (" << sum_digits << ") кратна числу a (" << a << ")." << std::endl;
    } else {
        std::cout << "Сумма максимальной и минимальной цифр (" << sum_digits << ") не кратна числу a (" << a << ")." << std::endl;
    }
}
