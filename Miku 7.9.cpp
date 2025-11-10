

#include <iostream>

int main() {
    int sum1 = 0;
    int sum2 = 0;
    std::cout << "Введите оценки двух учеников по четырем предметам:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        int grade1, grade2;
        std::cout << "Предмет " << i + 1 << " - Ученик 1: ";
        std::cin >> grade1;
        std::cout << "Предмет " << i + 1 << " - Ученик 2: ";
        std::cin >> grade2;
        sum1 += grade1;
        sum2 += grade2;
    }
    std::cout << "Сумма оценок первого ученика: " << sum1 << std::endl;
    std::cout << "Сумма оценок второго ученика: " << sum2 << std::endl;
    return 0;
}
