

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void solve_6_49() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int temp_n = n;
    int sum_digits = 0;
    long long product_digits = 1;
    int count_digits = 0;
    int first_digit = -1, last_digit = -1;

    if (n == 0) {
        sum_digits = 0;
        product_digits = 0;
        count_digits = 1;
        first_digit = 0;
        last_digit = 0;
    } else {
        last_digit = n % 10;
        while (temp_n > 0) {
            int digit = temp_n % 10;
            sum_digits += digit;
            product_digits *= digit;
            count_digits++;
            first_digit = digit;
            temp_n /= 10;
        }
    }

    std::cout << "а) Сумма цифр > 10: " << (sum_digits > 10 ? "Да" : "Нет") << std::endl;
    std::cout << "б) Произведение цифр < 50: " << (product_digits < 50 ? "Да" : "Нет") << std::endl;
    std::cout << "в) Количество цифр четное: " << (count_digits % 2 == 0 ? "Да" : "Нет") << std::endl;
    std::cout << "г) Число четырехзначное: " << (count_digits == 4 ? "Да" : "Нет") << std::endl;
    std::cout << "д) Первая цифра <= 6: " << (first_digit <= 6 ? "Да" : "Нет") << std::endl;
    std::cout << "е) Начинается и заканчивается одной и той же цифрой: " << (first_digit == last_digit ? "Да" : "Нет") << std::endl;
    std::cout << "ж) Какая из цифр больше: первая или последняя: " << (first_digit > last_digit ? "Первая" : (first_digit < last_digit ? "Последняя" : "Одинаковые")) << std::endl;
}

int main() {
    solve_6_49();
    return 0;
}
