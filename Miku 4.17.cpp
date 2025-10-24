#include <iostream>

int main() {
    int birth_year, birth_month, current_year, current_month;
    std::cout << "Введите год и номер месяца рождения: ";
    std::cin >> birth_year >> birth_month;
    std::cout << "Введите текущий год и номер месяца: ";
    std::cin >> current_year >> current_month;
    int age = current_year - birth_year;
    if (current_month < birth_month) {
        age--;
    }
    std::cout << "Возраст человека: " << age << " полных лет." << std::endl;
    return 0;
}
