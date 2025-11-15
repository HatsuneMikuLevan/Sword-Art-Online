

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

using namespace std;

const int TOTAL_PENALTIES = 24;

int main() {
    // Использование массивов (векторов) для хранения данных
    vector<int> teamNumbers(TOTAL_PENALTIES);
    vector<int> durations(TOTAL_PENALTIES);

    // Пример заполнения данных (можно заменить вводом с клавиатуры)
    // В реальной программе данные вводятся пользователем или читаются из файла
    // Для примера инициализируем нулями
    for (int i = 0; i < TOTAL_PENALTIES; ++i) {
        teamNumbers[i] = (i % 2) + 1; // Чередование команд 1 и 2
        durations[i] = (i % 3) + 1; // Длительность 1, 2 или 3 минуты
    }

    // Пример обработки: подсчет общего времени удаления для каждой команды
    int totalDurationTeam1 = 0;
    int totalDurationTeam2 = 0;

    for (int i = 0; i < TOTAL_PENALTIES; ++i) {
        if (teamNumbers[i] == 1) {
            totalDurationTeam1 += durations[i];
        } else if (teamNumbers[i] == 2) {
            totalDurationTeam2 += durations[i];
        }
    }

    cout << "Общее время удалений для Команды 1: " << totalDurationTeam1 << " минут" << endl;
    cout << "Общее время удалений для Команды 2: " << totalDurationTeam2 << " минут" << endl;

    return 0;
}
