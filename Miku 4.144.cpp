#include <iostream>

bool is_leap(int g) {
    return (g % 400 == 0) || (g % 4 == 0 && g % 100 != 0);
}

int days_in_month(int m, int g) {
    if (m == 2) {
        return is_leap(g) ? 29 : 28;
    }
    if (m == 4  m == 6  m == 9 || m == 11) {
        return 30;
    }
    return 31;
}

void get_previous_day(int& g, int& m, int& n) {
    if (n == 1) {
        if (m == 1) {
            g--;
            m = 12;
            n = 31;
        } else {
            m--;
            n = days_in_month(m, g);
        }
    } else {
        n--;
    }
}

void get_next_day(int& g, int& m, int& n) {
    if (n == days_in_month(m, g)) {
        if (m == 12) {
            g++;
            m = 1;
            n = 1;
        } else {
            m++;
            n = 1;
        }
    } else {
        n++;
    }
}

int main() {
    int g, m, n;
    std::cout << "Введите год (g), месяц (m) и день (n): ";
    std::cin >> g >> m >> n;

    // a) предыдущий день
    int prev_g = g, prev_m = m, prev_n = n;
    get_previous_day(prev_g, prev_m, prev_n);
    std::cout << "Предыдущий день: " << prev_n << "." << prev_m << "." << prev_g << std::endl;

    // б) следующий день
    int next_g = g, next_m = m, next_n = n;
    get_next_day(next_g, next_m, next_n);
    std::cout << "Следующий день: " << next_n << "." << next_m << "." << next_g << std::endl;

    return 0;
}
