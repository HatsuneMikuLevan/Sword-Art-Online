

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int num_students;
    std::cout << "Введите количество учеников в каждом классе: ";
    std::cin >> num_students;

    // Ввод данных и расчет для первого класса
    std::vector<double> heights1(num_students);
    double sum1 = 0;
    std::cout << "Введите рост учеников первого класса (через пробел или с новой строки): ";
    for (int i = 0; i < num_students; ++i) {
        std::cin >> heights1[i];
        sum1 += heights1[i];
    }
    double average_height1 = sum1 / num_students;

    // Ввод данных и расчет для второго класса
    std::vector<double> heights2(num_students);
    double sum2 = 0;
    std::cout << "Введите рост учеников второго класса (через пробел или с новой строки): ";
    for (int i = 0; i < num_students; ++i) {
        std::cin >> heights2[i];
        sum2 += heights2[i];
    }
    double average_height2 = sum2 / num_students;

    // Вывод результатов
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средний рост в первом классе: " << average_height1 << std::endl;
    std::cout << "Средний рост во втором классе: " << average_height2 << std::endl;

    return 0;
}
