

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, -2, 3, 0, -5, 6, -7, 8, -9, 10}; // Пример массива
    int countPositive = 0;
    int countNegative = 0;

    for (int element : arr) {
        if (element > 0) {
            countPositive++;
        } else if (element < 0) {
            countNegative++;
        }
    }

    std::cout << "Количество положительных элементов: " << countPositive << std::endl;
    std::cout << "Количество отрицательных элементов: " << countNegative << std::endl;

    return 0;
}
