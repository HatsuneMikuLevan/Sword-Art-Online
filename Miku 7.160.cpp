

#include <iostream>
#include <vector>
#include <limits>

int solve_7160(const std::vector<double>& times) {
    if (times.empty()) return -1; // Обработка пустого ввода

    double best_time = std::numeric_limits<double>::max();
    int best_skier_num = -1;

    for (int i = 0; i < times.size(); ++i) {
        // Использование тернарного оператора для обновления лучшего результата и номера
        times[i] < best_time ? (best_time = times[i], best_skier_num = i + 1) : best_time;
    }
    return best_skier_num;
}

// Пример использования:
// int main() {
//     std::vector<double> results = {10.5, 9.8, 11.2, 9.8, 10.1};
//     std::cout << "Номер лыжника с лучшим результатом: " << solve_7160(results) << std::endl;
//     return 0;
// }
