

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int K;
    std::cout << "Введите количество кубиков K: ";
    std::cin >> K;

    std::vector<int> scores(3, 0);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < K; ++j) {
            scores[i] += (rand() % 6) + 1;
        }
        std::cout << "Сумма очков Игрока " << i + 1 << ": " << scores[i] << std::endl;
    }

    int max_score = *std::max_element(scores.begin(), scores.end());
    std::cout << "Наибольшая сумма очков: " << max_score << std::endl;

    std::cout << "Победители: ";
    for (int i = 0; i < 3; ++i) {
        if (scores[i] == max_score) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
