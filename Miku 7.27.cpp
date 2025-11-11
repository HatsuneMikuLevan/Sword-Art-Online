

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int num_students = 20;
    std::vector<int> grades(num_students);
    int sum = 0;
    std::cout << "Введите 20 оценок по физике: ";
    for (int i = 0; i < num_students; ++i) {
        std::cin >> grades[i];
        sum += grades[i];
    }

    double average_grade = static_cast<double>(sum) / num_students;
    std::cout << "Средняя оценка: " << average_grade << std::endl;

    return 0;
}
