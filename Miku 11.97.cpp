

#include <iostream>
#include <vector>
#include <numeric>

void solve_11_97(const std::vector<double>& growth) {
    if (growth.size() != 25) {
        std::cout << "Количество учеников не равно 25." << std::endl;
        return;
    }
    double sum = std::accumulate(growth.begin(), growth.end(), 0.0);
    double avg_growth = sum / 25.0;
    int count = 0;
    for (size_t i = 0; i < growth.size(); ++i) {
        if (growth[i] > avg_growth) {
            count++;
        }
    }
    std::cout << "Средний рост по классу: " << avg_growth << std::endl;
    std::cout << "Количество учеников, рост которых больше среднего: " << count << std::endl;
}
