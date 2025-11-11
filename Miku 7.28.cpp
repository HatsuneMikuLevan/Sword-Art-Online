

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int num_subjects = 10;
    std::vector<int> grades(num_subjects);
    int sum = 0;
    std::cout << "Введите 10 оценок по предметам: ";
    for (int i = 0; i < num_subjects; ++i) {
        std::cin >> grades[i];
        sum += grades[i];
    }

    double average_grade = static_cast<double>(sum) / num_subjects;
    std::cout << "Средняя оценка: " << average_grade << std::endl;

    return 0;
}
