7.21

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int sports_count = 10;
    std::vector<int> athlete1_scores(sports_count);
    std::vector<int> athlete2_scores(sports_count);



    int athlete1_total = std::accumulate(athlete1_scores.begin(), athlete1_scores.end(), 0);
    int athlete2_total = std::accumulate(athlete2_scores.begin(), athlete2_scores.end(), 0);

    if (athlete1_total > athlete2_total) {
        std::cout << "Лучший результат показал спортсмен 1." << std::endl;
    } else if (athlete2_total > athlete1_total) {
        std::cout << "Лучший результат показал спортсмен 2." << std::endl;
    } else {
        std::cout << "Результаты спортсменов равны." << std::endl;
    }

    return 0;
}
