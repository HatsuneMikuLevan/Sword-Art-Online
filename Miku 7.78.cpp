

#include <iostream>

int main() {

    int counts[4] = {0, 0, 0, 0};
    int grade;

    std::cout << "Введите оценки по физике (2, 3, 4, 5). Введите 0 для завершения." << std::endl;

    while (true) {
        std::cout << "Оценка (0 для выхода): ";
        std::cin >> grade;

        if (grade == 0) {
            break;
        }

        if (grade >= 2 && grade <= 5) {
            // Индекс в массиве: оценка - 2
            counts[grade - 2]++;
        } else {
            std::cout << "Неверная оценка. Попробуйте снова." << std::endl;
        }
    }

    std::cout << "\nСтатистика оценок:" << std::endl;
    std::cout << "Двоек: " << counts[0] << std::endl;
    std::cout << "Троек: " << counts[1] << std::endl;
    std::cout << "Четверок: " << counts[2] << std::endl;
    std::cout << "Пятерок: " << counts[3] << std::endl;

    return 0;
}
