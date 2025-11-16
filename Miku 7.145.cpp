

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solve_7145() {
    int num_judges;
    std::cout << "Введите количество судей: ";
    std::cin >> num_judges;

    std::vector<double> scores(num_judges);
    std::cout << "Введите оценки судей: ";
    for (int i = 0; i < num_judges; ++i) {
        std::cin >> scores[i];
    }

    // Сортируем оценки для упрощения поиска и удаления
    std::sort(scores.begin(), scores.end());

    // Удаляем одну самую низкую оценку (первый элемент)
    scores.erase(scores.begin());
    // Удаляем одну самую высокую оценку (последний элемент)
    scores.erase(scores.end() - 1);

    // Вычисляем среднее арифметическое оставшихся оценок
    double sum = std::accumulate(scores.begin(), scores.end(), 0.0);
    double average_score = sum / scores.size();

    std::cout << "Зачетная оценка спортсмена: " << average_score << std::endl;
}
