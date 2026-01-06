

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

void solve_11233(const std::vector<int>& combined_data) {
    int wins_count = 0;
    int draws_count = 0;
    int losses_count = 0;
    int large_diff_count = 0;
    int total_points = 0;

    std::cout << "--- а) Словесный результат каждой игры ---\n";
    for (size_t i = 0; i < combined_data.size(); ++i) {
        int scored = combined_data[i] / 10;
        int missed = combined_data[i] % 10;
        std::string result;

        if (scored > missed) {
            result = "выигрыш";
            wins_count++;
            total_points += 3;
        } else if (scored < missed) {
            result = "проигрыш";
            losses_count++;
            total_points += 0;
        } else {
            result = "ничья";
            draws_count++;
            total_points += 1;
        }
        std::cout << "Игра " << (i + 1) << ": " << result << " (Забито: " << scored << ", Пропущено: " << missed << ")\n";

        // Подпункт д)
        if (std::abs(scored - missed) >= 3) {
            large_diff_count++;
        }
    }
    // Вывод остальных результатов аналогично задаче 11.232
    std::cout << "\nВыигрышей: " << wins_count << ", Ничьих: " << draws_count << ", Проигрышей: " << losses_count << "\n";
    std::cout << "Игр с разностью >= 3: " << large_diff_count << "\n";
    std::cout << "Общее число очков: " << total_points << "\n";
}
