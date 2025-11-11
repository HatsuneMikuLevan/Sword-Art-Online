

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int num_students;
    std::cout << "Введите количество учащихся в каждом классе: ";
    if (!(std::cin >> num_students) || num_students <= 0) {
        std::cerr << "Некорректный ввод количества учащихся." << std::endl;
        return 1;
    }

    std::vector<int> grades_class1(num_students);
    std::vector<int> grades_class2(num_students);

    std::cout << "Введите оценки для первого класса (" << num_students << " оценок):" << std::endl;
    for (int i = 0; i < num_students; ++i) {
        std::cin >> grades_class1[i];
    }

    std::cout << "Введите оценки для второго класса (" << num_students << " оценок):" << std::endl;
    for (int i = 0; i < num_students; ++i) {
        std::cin >> grades_class2[i];
    }

    double avg_class1 = static_cast<double>(std::accumulate(grades_class1.begin(), grades_class1.end(), 0)) / num_students;
    double avg_class2 = static_cast<double>(std::accumulate(grades_class2.begin(), grades_class2.end(), 0)) / num_students;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средняя оценка в первом классе: " << avg_class1 << std::endl;
    std::cout << "Средняя оценка во втором классе: " << avg_class2 << std::endl;

    return 0;
}
