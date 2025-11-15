

#include <iostream>
#include <vector>

int main() {
    // Пример оценок студентов по двум экзаменам
    std::vector<int> exam1_grades = {5, 4, 2, 3, 5, 2, 4, 3};
    std::vector<int> exam2_grades = {4, 5, 3, 2, 4, 3, 5, 4};
    int failing_students = 0;

    for (int i = 0; i < exam1_grades.size(); ++i) {
        // Проверка, получил ли студент двойку хотя бы по одному экзамену
        if (exam1_grades[i] == 2 || exam2_grades[i] == 2) {
            failing_students++;
        }
    }

    std::cout << "Количество студентов, получивших двойку: " << failing_students << std::endl;
    return 0;
}
