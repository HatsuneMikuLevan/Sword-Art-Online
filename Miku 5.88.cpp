

#include <iostream>

int main() {
    int s;
    std::cout << "Введите значение s (0 < s < 27): ";
    std::cin >> s;

    int count = 0;
    for (int i = 100; i <= 999; ++i) {
        int sum_of_digits = 0;
        int temp = i;
        while (temp > 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        if (sum_of_digits == s) {
            count++;
        }
    }
    std::cout << "Количество трехзначных чисел, сумма цифр которых равна " << s << ", составляет: " << count << std::endl;
    return 0;
}
