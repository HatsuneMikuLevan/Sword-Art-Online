

#include <iostream>
#include <vector>
#include <numeric>

double calculate_average_age(int num_students) {
    std::vector<double> ages(num_students);
    double sum = 0.0;
    for (int i = 0; i < num_students; ++i) {
        std::cin >> ages[i];
        sum += ages[i];
    }
    return sum / num_students;
}

int main() {
    const int num_students = 20;
    std::cout << "Введите возраст 20 учеников первого класса (например, 14.5): ";
    double average_age_class1 = calculate_average_age(num_students);
    std::cout << "Средний возраст первого класса: " << average_age_class1 << std::endl;

    std::cout << "Введите возраст 20 учеников второго класса: ";
    double average_age_class2 = calculate_average_age(num_students);
    std::cout << "Средний возраст второго класса: " << average_age_class2 << std::endl;

    return 0;
}
