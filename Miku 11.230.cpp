

#include <iostream>
#include <vector>

int main() {
    std::vector<int> scored = {85, 92, 78, 101, 88, 75, 95, 82, 90, 70, 98, 81, 89, 76, 93};
    std::vector<int> conceded = {80, 95, 78, 99, 90, 70, 95, 85, 88, 72, 96, 81, 91, 79, 92};

    std::cout << "Результаты игр (без доп. массива):" << std::endl;
    for (size_t i = 0; i < scored.size(); ++i) {
        std::cout << "Игра " << (i + 1) << ": ";
        if (scored[i] > conceded[i]) {
            std::cout << "выигрыш" << std::endl;
        } else if (scored[i] < conceded[i]) {
            std::cout << "проигрыш" << std::endl;
        } else {
            std::cout << "ничья" << std::endl; // Хотя в условии только выигрыш/проигрыш
        }
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> scored = {85, 92, 78, 101, 88, 75, 95, 82, 90, 70, 98, 81, 89, 76, 93};
    std::vector<int> conceded = {80, 95, 78, 99, 90, 70, 95, 85, 88, 72, 96, 81, 91, 79, 92};
    std::vector<std::string> results(scored.size());

    for (size_t i = 0; i < scored.size(); ++i) {
        if (scored[i] > conceded[i]) {
            results[i] = "выигрыш";
        } else if (scored[i] < conceded[i]) {
            results[i] = "проигрыш";
        } else {
            results[i] = "ничья";
        }
    }

    std::cout << "Результаты игр (с доп. массивом):" << std::endl;
    for (size_t i = 0; i < results.size(); ++i) {
        std::cout << "Игра " << (i + 1) << ": " << results[i] << std::endl;
    }

    return 0;
}
