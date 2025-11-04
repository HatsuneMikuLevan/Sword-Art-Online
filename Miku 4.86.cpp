
#include <iostream>

void solve_4_86() {
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;

    std::cout << "Введите дату рождения (год месяц день): ";
    std::cin >> birth_year >> birth_month >> birth_day;

    std::cout << "Введите сегодняшнюю дату (год месяц день): ";
    std::cin >> current_year >> current_month >> current_day;

    int age = current_year - birth_year;
    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }
    std::cout << "Возраст человека: " << age << " полных лет" << std::endl;
}
