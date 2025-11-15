

#include <iostream>
#include <vector>
#include <cmath>

void solve_781() {
    std::vector<int> scores(20); // Использование вектора как динамического массива [3]
    std::cout << "Введите 20 однозначных или двузначных чисел (например, 32, 22, 0):" << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cin >> scores[i];
    }

    std::cout << "Обработка результатов:" << std::endl;

    for (int i = 0; i < 20; ++i) {
        int total_score = scores[i];
        int goals_scored, goals_missed;

        if (total_score >= 0 && total_score <= 9) {
            goals_scored = total_score;
            goals_missed = 0;
        } else if (total_score >= 10 && total_score <= 99) {
            goals_scored = total_score / 10;
            goals_missed = total_score % 10;
        } else {
            std::cout << "Некорректный ввод для игры " << i + 1 << std::endl;
            continue;
        }
        std::cout << "Игра " << i + 1 << ": Забито - " << goals_scored << ", Пропущено - " << goals_missed << std::endl;
    }
}

// Пример использования:
// int main() {
//     solve_781();
//     return 0;
// }
