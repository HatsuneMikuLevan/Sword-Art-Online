

#include <iostream>

void solve_6_36(int n, int a) {
    if (n == 0) {
        std::cout << "a) Количество цифр " << a << ": " << (a == 0 ? 1 : 0) << std::endl;
        std::cout << "б) Сумма цифр, больших " << a << ": 0" << std::endl;
        return;
    }

    int temp_n = n;
    int count_a = 0;
    int sum_gta = 0;

    while (temp_n > 0) {
        int digit = temp_n % 10;
        if (digit == a) {
            count_a++;
        }
        if (digit > a) {
            sum_gta += digit;
        }
        temp_n /= 10;
    }

    std::cout << "a) Количество цифр " << a << ": " << count_a << std::endl;
    std::cout << "б) Сумма цифр, больших " << a << ": " << sum_gta << std::endl;
}

int main() {
    int n, a;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    std::cout << "Введите цифру a (0 < a < 8): ";
    std::cin >> a;
    if (a > 0 && a < 8) {
        solve_6_36(n, a);
    } else {
        std::cout << "Некорректное значение a." << std::endl;
    }
    return 0;
}
