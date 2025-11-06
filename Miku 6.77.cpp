

#include <iostream>

void solve677() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    // Решение для пункта а)
    int temp_a = n;
    if (temp_a < 10) {
        std::cout << "а) Число состоит из одинаковых цифр: да" << std::endl;
    } else {
        int first_digit = temp_a % 10;
        bool all_same = true;
        temp_a /= 10;
        while (temp_a > 0) {
            if (temp_a % 10 != first_digit) {
                all_same = false;
                break;
            }
            temp_a /= 10;
        }
        std::cout << "а) Число состоит из одинаковых цифр: " << (all_same ? "да" : "нет") << std::endl;
    }

    // Решение для пункта б)
    int temp_b = n;
    if (temp_b < 10) {
        std::cout << "б) Число содержит две одинаковые цифры, стоящие рядом: нет" << std::endl;
    } else {
        bool has_adjacent_duplicates = false;
        int prev_digit = temp_b % 10;
        temp_b /= 10;
        while (temp_b > 0) {
            int current_digit = temp_b % 10;
            if (current_digit == prev_digit) {
                has_adjacent_duplicates = true;
                break;
            }
            prev_digit = current_digit;
            temp_b /= 10;
        }
        std::cout << "б) Число содержит две одинаковые цифры, стоящие рядом: " << (has_adjacent_duplicates ? "да" : "нет") << std::endl;
    }
}
