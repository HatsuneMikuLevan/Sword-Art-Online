
#include <iostream>
#include <vector>

int main() {
    const int daysInJune = 30;
    const int entriesPerResearcher = daysInJune / 2;

    // Таблицы исследователей (заполнены случайными данными для примера)
    std::vector<int> researcher1(entriesPerResearcher); // Дни 1, 3, 5...
    std::vector<int> researcher2(entriesPerResearcher); // Дни 2, 4, 6...
    std::vector<int> combinedData(daysInJune); // Итоговая таблица

    // Заполнение данных для примера (например, чередующиеся направления)
    for (int i = 0; i < entriesPerResearcher; ++i) {
        researcher1[i] = (i % 2) + 1; // 1, 2, 1, 2...
        researcher2[i] = (i % 2) + 3; // 3, 4, 3, 4...
    }

    // Объединение данных в одну таблицу
    for (int i = 0; i < entriesPerResearcher; ++i) {
        combinedData[i * 2] = researcher1[i];     // Нечетные дни (индексы 0, 2, ...)
        combinedData[i * 2 + 1] = researcher2[i]; // Четные дни (индексы 1, 3, ...)
    }

    // Вывод итоговой таблицы
    std::cout << "Итоговая таблица направления ветра за июнь (30 дней):" << std::endl;
    for (int i = 0; i < daysInJune; ++i) {
        std::cout << "День " << i + 1 << ": " << combinedData[i] << std::endl;
    }

    return 0;
}
