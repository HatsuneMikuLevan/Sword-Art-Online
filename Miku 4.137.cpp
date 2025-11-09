
#include <iostream>

int main() {
    int monthNumber;
    std::cout << "Введите порядковый номер месяца (1-12): ";
    std::cin >> monthNumber;

    if (monthNumber == 2) {
        std::cout << "28 дней" << std::endl;
    } else if (monthNumber == 4  monthNumber == 6  monthNumber == 9 || monthNumber == 11) {
        std::cout << "30 дней" << std::endl;
    } else {
        std::cout << "31 день" << std::endl;
    }
    return 0;
}
