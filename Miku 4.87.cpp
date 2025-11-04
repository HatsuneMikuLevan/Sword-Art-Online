

#include <iostream>

void solve_4_87() {
    int year1, month1, day1;
    int year2, month2, day2;

    std::cout << "Введите дату рождения первого человека (год месяц день): ";
    std::cin >> year1 >> month1 >> day1;

    std::cout << "Введите дату рождения второго человека (год месяц день): ";
    std::cin >> year2 >> month2 >> day2;

    if (year1 < year2) {
        std::cout << "Первый человек старше." << std::endl;
    } else if (year2 < year1) {
        std::cout << "Второй человек старше." << std::endl;
    } else {
        if (month1 < month2) {
            std::cout << "Первый человек старше." << std::endl;
        } else if (month2 < month1) {
            std::cout << "Второй человек старше." << std::endl;
        } else {
            if (day1 < day2) {
                std::cout << "Первый человек старше." << std::endl;
            } else if (day2 < day1) {
                std::cout << "Второй человек старше." << std::endl;
            } else {
                std::cout << "Оба человека одного возраста." << std::endl;
            }
        }
    }
}
