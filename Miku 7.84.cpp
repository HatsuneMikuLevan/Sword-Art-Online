

#include <iostream>
#include <vector>
#include <numeric>

bool moreThanFivePositive(const std::vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num > 0) {
            count++;
        }
    }
    return count > 5;
}

int main() {
    std::vector<int> numbers = {1, -2, 3, 4, -5, 6, 7, -8, 9, 10}; // 7 positive
    if (moreThanFivePositive(numbers)) {
        std::cout << "Количество положительных чисел превышает 5." << std::endl;
    } else {
        std::cout << "Количество положительных чисел не превышает 5." << std::endl;
    }
    return 0;
}
