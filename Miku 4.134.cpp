

#include <iostream>

int main() {
    int monthNumber;
    std::cout << "Введите порядковый номер месяца (1-12): ";
    std::cin >> monthNumber;

    switch (monthNumber) {
        case 1:
            std::cout << "Январь" << std::endl;
            break;
        case 2:
            std::cout << "Февраль" << std::endl;
            break;
        case 3:
            std::cout << "Март" << std::endl;
            break;
        case 4:
            std::cout << "Апрель" << std::endl;
            break;
        case 5:
            std::cout << "Май" << std::endl;
            break;
        case 6:
            std::cout << "Июнь" << std::endl;
            break;
        case 7:
            std::cout << "Июль" << std::endl;
            break;
        case 8:
            std::cout << "Август" << std::endl;
            break;
        case 9:
            std::cout << "Сентябрь" << std::endl;
            break;
        case 10:
            std::cout << "Октябрь" << std::endl;
            break;
        case 11:
            std::cout << "Ноябрь" << std::endl;
            break;
        case 12:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неверный номер месяца." << std::endl;
            break;
    }
    return 0;
}
