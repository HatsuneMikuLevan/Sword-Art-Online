11.

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<double> temperatures(31); // 31 день июля
    // Заполните массив temperatures данными
    // Например:
    for (int i = 0; i < 31; ++i) {
        temperatures[i] = 20.0 + (i % 5);
    }

    if (temperatures.size() < 7) {
        std::cout << "Недостаточно данных для июля." << std::endl;
        return 1;
    }

    double max_sum = 0;
    int best_start_day = 0; // День 0 - это 1 июля

    // Сумма первых 7 дней
    for (int i = 0; i < 7; ++i) {
        max_sum += temperatures[i];
    }
    double current_sum = max_sum;

    // Скользящее окно
    for (int i = 1; i <= temperatures.size() - 7; ++i) {
        current_sum = current_sum - temperatures[i - 1] + temperatures[i + 6];
        if (current_sum > max_sum) {
            max_sum = current_sum;
            best_start_day = i;
        }
    }

    std::cout << "Самые теплые семь дней начинаются с " << best_start_day + 1 << " июля." << std::endl;
    return 0;
}
