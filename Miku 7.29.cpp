

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cout << "Введите количество учеников в классе: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество учеников должно быть натуральным числом." << std::endl;
        return 1;
    }

    std::vector<int> grades(n);
    int sum = 0;
    std::cout << "Введите " << n << " оценок по алгебре: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> grades[i];
        sum += grades[i];
    }

    double average_grade = static_cast<double>(sum) / n;
    std::cout << "Средняя оценка: " << average_grade << std::endl;

    return 0;
}
