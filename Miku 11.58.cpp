

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Пример массива оценок (18 элементов)
    std::vector<double> scores = {
        5.5, 5.8, 5.2, 5.9, 5.1, 5.7, // Обязательная программа (первые 6)
        9.1, 9.5, 9.3, 9.0, 9.6, 9.4, 9.2, 9.7, 9.8, 9.9, 9.5, 9.3  // Произвольная программа (остальные 12)
    };

    // Сумма оценок по обязательной программе (элементы с 0 по 5)
    double compulsory_sum = std::accumulate(scores.begin(), scores.begin() + 6, 0.0);

    // Сумма оценок по произвольной программе (элементы с 6 по 17)
    double free_sum = std::accumulate(scores.begin() + 6, scores.end(), 0.0);

    std::cout << "Сумма по обязательной программе: " << compulsory_sum << std::endl;
    std::cout << "Сумма по произвольной программе: " << free_sum << std::endl;

    if (compulsory_sum > free_sum) {
        std::cout << "Лучший результат показан по обязательной программе." << std::endl;
    } else if (free_sum > compulsory_sum) {
        std::cout << "Лучший результат показан по произвольной программе." << std::endl;
    } else {
        std::cout << "Результаты по обеим программам равны." << std::endl;
    }

    return 0;
}
