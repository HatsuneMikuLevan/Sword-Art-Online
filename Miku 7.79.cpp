

#include <iostream>

int main() {

    int results[3] = {0, 0, 0};
    int points;

    std::cout << "Введите очки за каждую игру (0, 1 или 3). Введите -1 для завершения." << std::endl;

    while (true) {
        std::cout << "Очки (0, 1, 3; -1 для выхода): ";
        std::cin >> points;

        if (points == -1) {
            break;
        }

        if (points == 0) {
            results[0]++;
        } else if (points == 1) {
            results[1]++;
        } else if (points == 3) {
            results[2]++;
        } else {
            std::cout << "Неверное количество очков. Попробуйте снова." << std::endl;
        }
    }

    std::cout << "\nСтатистика матчей:" << std::endl;
    std::cout << "Выигрышей: " << results[2] << std::endl;
    std::cout << "Ничьих: " << results[1] << std::endl;
    std::cout << "Проигрышей: " << results[0] << std::endl;

    return 0;
}
