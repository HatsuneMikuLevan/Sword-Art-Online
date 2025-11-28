

#include <iostream>
#include <vector>

int main() {
    // Пример результатов 20 игр: 3 - выигрыш, 2 - проигрыш, 1 - ничья
    std::vector<int> results = {3, 1, 2, 3, 3, 1, 2, 3, 1, 2, 3, 3, 1, 2, 3, 1, 2, 3, 1, 2};
    int wins = 0;
    int draws = 0;
    int losses = 0;

    for (int result : results) {
        if (result == 3) {
            wins++;
        } else if (result == 1) {
            draws++;
        } else if (result == 2) {
            losses++;
        }
    }

    std::cout << "Количество выигрышей: " << wins << std::endl;
    std::cout << "Количество ничьих: " << draws << std::endl;
    std::cout << "Количество проигрышей: " << losses << std::endl;

    return 0;
}
