

#include <iostream>
#include <vector>
#include <algorithm>

void removeElementByIndex(std::vector<double>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        for (size_t i = index; i < arr.size() - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        arr.back() = 0.0;
    }
}

void removeStudent(std::vector<double>& growth, int caseType, double value) {
    int indexToRemove = -1;
    if (caseType == 1) { // Известен порядковый номер
        indexToRemove = static_cast<int>(value) - 1;
    } else if (caseType == 2) { // Известен рост
        for (size_t i = 0; i < growth.size(); ++i) {
            if (growth[i] == value) {
                indexToRemove = i;
                break;
            }
        }
    }

    if (indexToRemove != -1) {
        removeElementByIndex(growth, indexToRemove);
    }
}

int main() {
    std::vector<double> studentGrowth = {180.5, 175.0, 170.2, 165.0, 160.1, 155.0, 150.0, 145.0, 140.0, 135.0,
                                         130.0, 125.0, 120.0, 115.0, 110.0, 105.0, 100.0, 95.0, 90.0, 85.0,
                                         80.0, 75.0, 70.0, 65.0, 60.0};

    // Случай 1: Известен порядковый номер (например, 5-й ученик)
    std::vector<double> growth1 = studentGrowth;
    removeStudent(growth1, 1, 5.0);
    std::cout << "Случай 1 (по номеру): ";
    for (double h : growth1) {
        std::cout << h << " ";
    }
    std::cout << std::endl;

    // Случай 2: Известен рост (например, 165.0)
    std::vector<double> growth2 = studentGrowth;
    removeStudent(growth2, 2, 165.0);
    std::cout << "Случай 2 (по росту): ";
    for (double h : growth2) {
        std::cout << h << " ";
    }
    std::cout << std::endl;

    return 0;
}
