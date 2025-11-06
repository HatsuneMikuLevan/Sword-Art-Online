

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

void solve_6_50() {
    int n, a, b, k, m;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b: ";
    std::cin >> b;
    std::cout << "Введите число k: ";
    std::cin >> k;
    std::cout << "Введите число m: ";
    std::cin >> m;

    int temp_n = n;
    int sum_digits = 0;
    long long product_digits = 1;
    int count_digits = 0;
    int first_digit = -1;

    if (n == 0) {
        sum_digits = 0;
        product_digits = 0;
        count_digits = 1;
        first_digit = 0;
    } else {
        while (temp_n > 0) {
            int digit = temp_n % 10;
            sum_digits += digit;
            product_digits *= digit;
            count_digits++;
            first_digit = digit;
            temp_n /= 10;
        }
    }

    std::cout << "а) Сумма цифр < a: " << (sum_digits < a ? "Да" : "Нет") << std::endl;
    std::cout << "б) Произведение цифр > b: " << (product_digits > b ? "Да" : "Нет") << std::endl;
    std::cout << "в) Число k-значное: " << (count_digits == k ? "Да" : "Нет") << std::endl;
    std::cout << "г) Первая цифра > m: " << (first_digit > m ? "Да" : "Нет") << std::endl;
}

int main() {
    solve_6_50();
    return 0;
}
