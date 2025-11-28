

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> grades = {5, 4, 3, 5, 4, 3, 2, 5, 4, 3, 5, 4, 3, 2, 5, 4, 3, 5, 4, 3, 2, 5};
    double sum = std::accumulate(grades.begin(), grades.end(), 0.0);
    double average_grade = sum / grades.size();
    int count = 0;
    std::cout << "Номера учеников, оценка которых меньше средней оценки по классу (" << average_grade << "):" << std::endl;
    for (size_t i = 0; i < grades.size(); ++i) {
        if (grades[i] < average_grade) {
            std::cout << "Ученик " << i + 1 << std::endl;
            count++;
        }
    }
    std::cout << "Общее количество таких учеников: " << count << std::endl;
    return 0;
}
