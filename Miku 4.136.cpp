

#include <iostream>

int main() {
    int monthNumber;
    int year;
    std::cout << "Введите порядковый номер месяца (1-12): ";
    std::cin >> monthNumber;
    std::cout << "Введите год: ";
    std::cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout << "31 день" << std::endl;
            break;
        case 4: case 6: case 9: case 11:
            std::cout << "30 дней" << std::endl;
            break;
        case 2:
            if (isLeap) {
                std::cout << "29 дней" << std::endl;
            } else {
                std::cout << "28 дней" << std::endl;
            }
            break;
        default:
            std::cout << "Неверный номер месяца." << std::endl;
            break;
    }
    return 0;
}
