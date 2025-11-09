

#include <iostream>

int main() {
    int dayNumber;
    std::cout << "Введите порядковый номер дня недели (1-7): ";
    std::cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            std::cout << "Понедельник" << std::endl;
            break;
        case 2:
            std::cout << "Вторник" << std::endl;
            break;
        case 3:
            std::cout << "Среда" << std::endl;
            break;
        case 4:
            std::cout << "Четверг" << std::endl;
            break;
        case 5:
            std::cout << "Пятница" << std::endl;
            break;
        case 6:
            std::cout << "Суббота" << std::endl;
            break;
        case 7:
            std::cout << "Воскресенье" << std::endl;
            break;
        default:
            std::cout << "Неверный номер дня недели." << std::endl;
            break;
    }
    return 0;
}
