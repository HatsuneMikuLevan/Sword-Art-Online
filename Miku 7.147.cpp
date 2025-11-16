

#include <iostream>
#include <algorithm>
#include <climits>

void solve_7147() {
    const int num_classes = 20;
    int max_students = -1;
    int min_students = INT_MAX;

    for (int i = 0; i < num_classes; ++i) {
        int students_in_class;
        std::cout << "Введите число учеников в классе #" << i + 1 << ": ";
        std::cin >> students_in_class;

        if (students_in_class > max_students) {
            max_students = students_in_class;
        }
        if (students_in_class < min_students) {
            min_students = students_in_class;
        }
    }

    int difference = max_students - min_students;
    std::cout << "Численность самого большого класса превышает численность самого маленького на: " << difference << std::endl;
}
