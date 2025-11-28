

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> arr = {12, 15, 20, 25, 33, 40, 45, 50, 55, 61}; // Пример массива
    int countEven = 0;
    int countEndsInFive = 0;

    for (int element : arr) {
        if (element % 2 == 0) {
            countEven++;
        }
        if (std::abs(element) % 10 == 5) {
            countEndsInFive++;
        }
    }

    std::cout << "Количество четных элементов: " << countEven << std::endl;
    std::cout << "Количество элементов, оканчивающихся на 5: " << countEndsInFive << std::endl;

    return 0;
}
