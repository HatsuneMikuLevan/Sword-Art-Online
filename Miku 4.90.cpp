

#include <iostream>

int main() {
    int m, n;
    std::cout << "Введите дату (номер месяца и число): ";
    std::cin >> m >> n;

    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Предыдущий день
    int prev_m = m;
    int prev_n = n - 1;
    if (prev_n == 0) {
        prev_m--;
        prev_n = days_in_month[prev_m];
    }
    std::cout << "Предыдущий день: " << prev_m << " " << prev_n << std::endl;

    // Следующий день
    int next_m = m;
    int next_n = n + 1;
    if (next_n > days_in_month[next_m]) {
        next_m++;
        next_n = 1;
    }
    std::cout << "Следующий день: " << next_m << " " << next_n << std::endl;

    return 0;
}
