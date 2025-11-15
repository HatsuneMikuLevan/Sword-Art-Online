

#include <iostream>
#include <vector>
#include <numeric>

bool countPositiveMultipleOfThree(const std::vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num > 0) {
            count++;
        }
    }
    return count % 3 == 0;
}

int main() {
    std::vector<int> numbers = {1, -2, 3, 4, -5, 6, 7, -8, 9, 10}; // 7 positive, not multiple of 3
    if (countPositiveMultipleOfThree(numbers)) {
        std::cout << "Количество положительных чисел кратно трем." << std::endl;
    } else {
        std::cout << "Количество положительных чисел не кратно трем." << std::endl;
    }
    return 0;
}
