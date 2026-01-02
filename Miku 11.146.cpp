

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solve_11_146(std::vector<int> results) {
    if (results.size() < 4) {
        std::cout << "Недостаточно данных для формирования команды." << std::endl;
        return;
    }

    std::sort(results.begin(), results.end());

    int total_time = std::accumulate(results.begin(), results.begin() + 4, 0);

    std::cout << "Суммарное время четырех лучших бегунов: " << total_time << " сотых долей секунды" << std::endl;
    std::cout << "Результаты бегунов: " << results[0] << ", " << results[1] << ", " << results[2] << ", " << results[3] << std::endl;
}
