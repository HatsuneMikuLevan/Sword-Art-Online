

#include <iostream>
#include <algorithm>

void solve_6_58() {
    int n, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    std::cout << "Способ 1 (два цикла):" << std::endl;
    // Находим максимальную цифру
    int max_digit = -1;
    temp = n;
    if (temp == 0) {
        max_digit = 0;
    } else {
        while (temp > 0) {
            max_digit = std::max(max_digit, temp % 10);
            temp /= 10;
        }
    }

    // Подсчитываем количество
    int count = 0;
    temp = n;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            if (temp % 10 == max_digit) {
                count++;
            }
            temp /= 10;
        }
    }
    std::cout << "Максимальная цифра " << max_digit << " встречается " << count << " раз." << std::endl;

    std::cout << "Способ 2 (один цикл):" << std::endl;
    max_digit = -1;
    count = 0;
    temp = n;
    if (temp == 0) {
        max_digit = 0;
        count = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            if (digit > max_digit) {
                max_digit = digit;
                count = 1;
            } else if (digit == max_digit) {
                count++;
            }
            temp /= 10;
        }
    }
    std::cout << "Максимальная цифра " << max_digit << " встречается " << count << " раз." << std::endl;
}
