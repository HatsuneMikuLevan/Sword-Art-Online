7.162

#include <iostream>
#include <vector>
#include <limits>

int solve_7162(const std::vector<double>& precipitations) {
    if (precipitations.empty()) return -1; // Обработка пустого ввода

    double max_precip = std::numeric_limits<double>::lowest();
    int best_day = -1;

    for (int i = 0; i < precipitations.size(); ++i) {
        // Использование тернарного оператора для обновления максимальных осадков и дня
        precipitations[i] >= max_precip ? (max_precip = precipitations[i], best_day = i + 1) : max_precip;
    }
    return best_day;
}

