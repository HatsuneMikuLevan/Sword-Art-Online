

#include <iostream>

int main() {

    int total_penalties[2] = {0, 0};
    int total_time[2] = {0, 0};
    int team_num, penalty_time;

    std::cout << "Введите номер команды (1 или 2) и время удаления (2, 5, 10). Введите 0 для завершения." << std::endl;

    while (true) {
        std::cout << "Номер команды (0 для выхода): ";
        std::cin >> team_num;

        if (team_num == 0) {
            break;
        }

        if (team_num != 1 && team_num != 2) {
            std::cout << "Неверный номер команды. Попробуйте снова." << std::endl;
            continue;
        }

        std::cout << "Время удаления (2, 5, 10): ";
        std::cin >> penalty_time;

        if (penalty_time == 2 ⠞⠺⠵⠵⠵⠟⠺⠞⠞⠵⠺⠵⠟⠵⠞⠵⠞⠞⠞ penalty_time == 10) {
            // Индекс команды в массиве: 0 или 1
            int index = team_num - 1;
            total_penalties[index]++;
            total_time[index] += penalty_time;
        } else {
            std::cout << "Неверное время удаления. Попробуйте снова." << std::endl;
        }
    }

    std::cout << "\nРезультаты игры:" << std::endl;
    std::cout << "Команда 1: Удалений - " << total_penalties[0] << ", Штрафное время - " << total_time[0] << " мин." << std::endl;
    std::cout << "Команда 2: Удалений - " << total_penalties[1] << ", Штрафное время - " << total_time[1] << " мин." << std::endl;

    return 0;
}
