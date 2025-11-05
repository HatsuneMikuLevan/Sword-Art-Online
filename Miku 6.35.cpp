

#include <iostream>

void solve_6_35(int n) {
    if (n == 0) {
        std::cout << "a) Количество цифр 3: 1" << std::endl;
        std::cout << "б) Количество последней цифры (0): 1" << std::endl;
        std::cout << "в) Количество четных цифр: 1" << std::endl;
        std::cout << "г) Сумма цифр, больших 5: 0" << std::endl;
        std::cout << "д) Произведение цифр, больших 7: 1" << std::endl;
        std::cout << "е) Количество цифр 0 и 5: 1" << std::endl;
        return;
    }

    int temp_n = n;
    int last_digit = n % 10;
    int count3 = 0;
    int count_last_digit = 0;
    int count_even = 0;
    int sum_gt5 = 0;
    long long prod_gt7 = 1;
    int count05 = 0;

    while (temp_n > 0) {
        int digit = temp_n % 10;
        if (digit == 3) {
            count3++;
        }
        if (digit == last_digit) {
            count_last_digit++;
        }
        if (digit % 2 == 0) {
            count_even++;
        }
        if (digit > 5) {
            sum_gt5 += digit;
        }
        if (digit > 7) {
            prod_gt7 *= digit;
        }
        if (digit == 0 || digit == 5) {
            count05++;
        }
        temp_n /= 10;
    }

    std::cout << "a) Количество цифр 3: " << count3 << std::endl;
    std::cout << "б) Количество последней цифры (" << last_digit << "): " << count_last_digit << std::endl;
    std::cout << "в) Количество четных цифр: " << count_even << std::endl;
    std::cout << "г) Сумма цифр, больших 5: " << sum_gt5 << std::endl;
    std::cout << "д) Произведение цифр, больших 7: " << prod_gt7 << std::endl;
    std::cout << "е) Количество цифр 0 и 5: " << count05 << std::endl;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    solve_6_35(n);
    return 0;
}
