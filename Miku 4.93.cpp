

#include <iostream>
#include <string>

int main() {
    int k;
    std::cout << "Введите номер дня года k (1-365): ";
    std::cin >> k;

    std::cout << "Выберите случай (1 - 1 января понедельник, 2 - 1 января d-й день): ";
    int choice;
    std::cin >> choice;

    int day_of_week_num;
    if (choice == 1) {
        // Случай а)
        day_of_week_num = (k - 1) % 7 + 1;
    } else {
        // Случай б)
        int d;
        std::cout << "Введите d (1 - понедельник, ..., 7 - воскресенье): ";
        std::cin >> d;
        day_of_week_num = ((d - 1) + (k - 1)) % 7 + 1;
    }

    std::string day_type;
    if (day_of_week_num == 6) {
        day_type = "суббота";
    } else if (day_of_week_num == 7) {
        day_type = "воскресенье";
    } else {
        day_type = "рабочий день";
    }

    std::cout << "k-й день года будет: " << day_type << std::endl;

    return 0;
}
