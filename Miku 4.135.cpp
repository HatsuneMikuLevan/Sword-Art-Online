#include <iostream>

int main() {
    int monthNumber;
    std::cout << "Введите порядковый номер месяца (1-12): ";
    std::cin >> monthNumber;

    if (monthNumber == 12  monthNumber == 1  monthNumber == 2) {
        std::cout << "Зима" << std::endl;
    } else if (monthNumber >= 3 && monthNumber <= 5) {
        std::cout << "Весна" << std::endl;
    } else if (monthNumber >= 6 && monthNumber <= 8) {
        std::cout << "Лето" << std::endl;
    } else if (monthNumber >= 9 && monthNumber <= 11) {
        std::cout << "Осень" << std::endl;
    } else {
        std::cout << "Неверный номер месяца." << std::endl;
    }
    return 0;
}
