

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

int main() {
    std::vector<double> scores(8);
 
    scores = {9.5, 9.0, 9.8, 10.0, 9.1, 9.9, 10.0, 9.0};

    // Удаляем одно вхождение максимальной оценки
    auto max_it = std::max_element(scores.begin(), scores.end());
    if (max_it != scores.end()) {
        scores.erase(max_it);
    }

    // Удаляем одно вхождение минимальной оценки
    auto min_it = std::min_element(scores.begin(), scores.end());
    if (min_it != scores.end()) {
        scores.erase(min_it);
    }

    // Вычисляем сумму оставшихся оценок
    double sum = std::accumulate(scores.begin(), scores.end(), 0.0);
    double average = sum / scores.size();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Зачетная оценка спортсмена: " << average << std::endl;

    return 0;
}
