4.143

#include <iostream>

void get_previous_day(int m, int n, int& prev_m, int& prev_n) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (n == 1) {
        prev_m = (m == 1) ? 12 : m - 1;
        prev_n = days_in_month[prev_m];
    } else {
        prev_m = m;
        prev_n = n - 1;
    }
}

void get_next_day(int m, int n, int& next_m, int& next_n) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (n == days_in_month[m]) {
        next_m = (m == 12) ? 1 : m + 1;
        next_n = 1;
    } else {
        next_m = m;
        next_n = n + 1;
    }
}

int main() {
    int m, n;
    std::cout << "Введите номер месяца (m) и число (n): ";
    std::cin >> m >> n;

    int prev_m, prev_n, next_m, next_n;

    get_previous_day(m, n, prev_m, prev_n);
    get_next_day(m, n, next_m, next_n);

    std::cout << "Предыдущий день: " << prev_n << "." << prev_m << std::endl;
    std::cout << "Следующий день: " << next_n << "." << next_m << std::endl;

    return 0;
}
