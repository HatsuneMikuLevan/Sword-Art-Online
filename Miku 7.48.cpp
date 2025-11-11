7.48

#include <iostream>

int main() {
    int pages;
    int total_journal_pages = 0;
    std::cout << "Введите количество страниц (0 или отрицательное число для завершения):" << std::endl;

    while (std::cin >> pages && pages > 0) {
        if (pages > 16) { // Если страниц больше 16, это журнал
            total_journal_pages += pages;
        }
    }

    std::cout << "Общее число страниц во всех журналах: " << total_journal_pages << std::endl;
    return 0;
}
