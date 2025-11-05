
#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>

int main() {
    long long n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Число не является натуральным." << std::endl;
        return 1;
    }

    if (n == 0) {
        std::cout << "Сумма цифр: 0" << std::endl;
        std::cout << "Количество цифр: 1" << std::endl;
        std::cout << "Произведение цифр: 0" << std::endl;
        std::cout << "Среднее арифметическое: 0" << std::endl;
        std::cout << "Сумма квадратов цифр: 0" << std::endl;
        std::cout << "Сумма кубов цифр: 0" << std::endl;
        std::cout << "Первая цифра: 0" << std::endl;
        std::cout << "Сумма первой и последней цифр: 0" << std::endl;
        return 0;
    }

    long long temp_n = n;
    long long sum_digits = 0;
    long long count_digits = 0;
    long long prod_digits = 1;
    long long sum_squares = 0;
    long long sum_cubes = 0;
    long long first_digit = 0;
    long long last_digit = temp_n % 10;

    while (temp_n > 0) {
        long long digit = temp_n % 10;
        sum_digits += digit;
        prod_digits *= digit;
        sum_squares += digit * digit;
        sum_cubes += digit * digit * digit;
        count_digits++;
        first_digit = digit;
        temp_n /= 10;
    }

    double avg_digits = static_cast<double>(sum_digits) / count_digits;

    std::cout << "а) Сумма его цифр: " << sum_digits << std::endl;
    std::cout << "б) Количество цифр в нем: " << count_digits << std::endl;
    std::cout << "в) Произведение его цифр: " << prod_digits << std::endl;
    std::cout << "г) Среднее арифметическое его цифр: " << avg_digits << std::endl;
    std::cout << "д) Сумма квадратов его цифр: " << sum_squares << std::endl;
    std::cout << "е) Сумма кубов его цифр: " << sum_cubes << std::endl;
    std::cout << "ж) Его первая цифра: " << first_digit << std::endl;
    std::cout << "з) Сумма его первой и последней цифр: " << first_digit + last_digit << std::endl;

    return 0;
}
