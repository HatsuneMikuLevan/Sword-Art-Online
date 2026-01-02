

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11_142(const std::vector<int>& scores) {
    if (scores.size() < 2) {
        std::cout << "Недостаточно данных." << std::endl;
        return;
    }

    int max1 = -1;
    int max2 = -1;
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] > max1) {
            max2 = max1;
            index2 = index1;
            max1 = scores[i];
            index1 = i + 1; // Команды нумеруются с 1
        } else if (scores[i] > max2 && scores[i] != max1) {
            max2 = scores[i];
            index2 = i + 1;
        }
    }

    std::cout << "Команда, занявшая первое место: " << index1 << " (очки: " << max1 << ")" << std::endl;
    std::cout << "Команда, занявшая второе место: " << index2 << " (очки: " << max2 << ")" << std::endl;
}
