

#include <iostream>
#include <vector>
#include <numeric>

bool madeNextStage(const std::vector<int>& scores, int threshold) {
    int totalScore = std::accumulate(scores.begin(), scores.end(), 0);
    return totalScore > threshold;
}

int main() {
    // Пример данных для 10 видов спорта
    std::vector<int> athleteScores = {100, 90, 80, 100, 95, 85, 90, 100, 90, 80};
    int requiredThreshold = 900; // Необходимый порог

    std::cout << "Спортсмен вышел в следующий этап? " << (madeNextStage(athleteScores, requiredThreshold) ? "Да" : "Нет") << std::endl;

    return 0;
}
