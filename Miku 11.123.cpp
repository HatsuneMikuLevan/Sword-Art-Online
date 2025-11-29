

#include <iostream>
#include <vector>

int findFirstOldest(const std::vector<int>& birthYears) {
    if (birthYears.empty()) return -1;

    int currentYear = 2025; // Использование текущего года для расчета возраста [1]
    int maxAge = -1;
    int oldestIndex = -1;

    for (int i = 0; i < birthYears.size(); ++i) {
        int age = currentYear - birthYears[i];
        if (age > maxAge) {
            maxAge = age;
            oldestIndex = i + 1; // Порядковый номер начинается с 1
        }
    }
    return oldestIndex;
}
#include <iostream>
#include <vector>

int findLastOldest(const std::vector<int>& birthYears) {
    if (birthYears.empty()) return -1;

    int currentYear = 2025; // Использование текущего года для расчета возраста [1]
    int maxAge = -1;
    int oldestIndex = -1;

    for (int i = 0; i < birthYears.size(); ++i) {
        int age = currentYear - birthYears[i];
        if (age >= maxAge) { // Изменение условия на >=
            maxAge = age;
            oldestIndex = i + 1; // Порядковый номер начинается с 1
        }
    }
    return oldestIndex;
}
