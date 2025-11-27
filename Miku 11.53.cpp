

#include <iostream>
#include <vector>
#include <numeric>

bool isTotalStudentsFourDigit(const std::vector<int>& studentCounts) {
    long long totalStudents = std::accumulate(studentCounts.begin(), studentCounts.end(), 0LL);
    return totalStudents >= 1000 && totalStudents <= 9999;
}

int main() {
    // Пример данных для 42 классов
    std::vector<int> counts(42, 25); // Допустим, в каждом классе по 25 учеников

    std::cout << "Общее число учеников четырехзначно? " << (isTotalStudentsFourDigit(counts) ? "Да" : "Нет") << std::endl;

    return 0;
}
