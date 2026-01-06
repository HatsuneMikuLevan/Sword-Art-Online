11.232

#include <iostream>
#include <vector>
#include <string>

void solve_11232(const std::vector<int>& scored, const std::vector<int>& missed) {
    int wins_count = 0;
    int draws_count = 0;
    int losses_count = 0;
    int large_diff_count = 0;
    int total_points = 0;

    std::cout << "--- а) Словесный результат каждой игры ---\n";
    for (size_t i = 0; i < scored.size(); ++i) {
        std::string result;
        if (scored[i] > missed[i]) {
            result = "выигрыш";
            wins_count++;
            total_points += 3;
        } else if (scored[i] < missed[i]) {
            result = "проигрыш";
            losses_count++;
            total_points += 0;
        } else {
            result = "ничья";
            draws_count++;
            total_points += 1;
        }
        std::cout << "Игра " << (i + 1) << ": " << result << "\n";

        // Подпункт д)
        if (std::abs(scored[i] - missed[i]) >= 3) {
            large_diff_count++;
        }
    }

    std::cout << "\n--- б) Количество выигрышей ---\n";
    std::cout << "Количество выигрышей: " << wins_count << "\n";

    std::cout << "\n--- в) Количество выигрышей и проигрышей ---\n";
    std::cout << "Количество выигрышей: " << wins_count << ", Количество проигрышей: " << losses_count << "\n";

    std::cout << "\n--- г) Количество выигрышей, ничьих и проигрышей ---\n";
    std::cout << "Выигрышей: " << wins_count << ", Ничьих: " << draws_count << ", Проигрышей: " << losses_count << "\n";

    std::cout << "\n--- д) Количество игр с разностью >= 3 ---\n";
    std::cout << "Количество таких игр: " << large_diff_count << "\n";

    std::cout << "\n--- е) Общее число очков ---\n";
    std::cout << "Общее число очков: " << total_points << "\n";
}
