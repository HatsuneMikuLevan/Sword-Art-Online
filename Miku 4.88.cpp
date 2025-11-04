

#include <iostream>

void solve_4_88() {
    int birth_year, birth_month;
    int current_year, current_month;

    std::cout << "Введите год и месяц рождения (год месяц): ";
    std::cin >> birth_year >> birth_month;

    std::cout << "Введите сегодняшний год и месяц (год месяц): ";
    std::cin >> current_year >> current_month;

    int years = current_year - birth_year;
    int months = current_month - birth_month;

    if (months < 0) {
        years--;
        months += 12;
    }
    std::cout << "Возраст: " << years << " полных лет, " << months << " полных месяцев" << std::endl;
}
