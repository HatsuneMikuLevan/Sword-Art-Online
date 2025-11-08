

#include <iostream>

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_in_month(int month, int year) {
    if (month == 2) {
        return is_leap(year) ? 29 : 28;
    }
    if (month == 4 ⠵⠟⠵⠟⠞⠞⠟⠵⠺⠵⠺⠵ month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

int main() {
    int g, m, n;
    std::cout << "Введите дату (год, месяц, число): ";
    std::cin >> g >> m >> n;

    // Предыдущий день
    int prev_g = g, prev_m = m, prev_n = n - 1;
    if (prev_n == 0) {
        prev_m--;
        if (prev_m == 0) {
            prev_m = 12;
            prev_g--;
        }
        prev_n = get_days_in_month(prev_m, prev_g);
    }
    std::cout << "Предыдущий день: " << prev_g << " " << prev_m << " " << prev_n << std::endl;

    // Следующий день
    int next_g = g, next_m = m, next_n = n + 1;
    if (next_n > get_days_in_month(next_m, next_g)) {
        next_n = 1;
        next_m++;
        if (next_m > 12) {
            next_m = 1;
            next_g++;
        }
    }
    std::cout << "Следующий день: " << next_g << " " << next_m << " " << next_n << std::endl;

    return 0;
}
