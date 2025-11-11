7.49

#include <iostream>
#include <vector>

int main() {
    int days_in_month = 31; // Пример для месяца с 31 днем
    std::vector<double> precipitations(days_in_month);
    double total_even_day_precip = 0.0;

    std::cout << "Введите количество осадков за каждый из " << days_in_month << " дней:" << std::endl;
    for (int i = 0; i < days_in_month; ++i) {
        std::cin >> precipitations[i];
        if ((i + 1) % 2 == 0) { // Если номер дня четный
            total_even_day_precip += precipitations[i];
        }
    }

    std::cout << "Общее количество осадков по четным дням: " << total_even_day_precip << std::endl;
    return 0;
}
