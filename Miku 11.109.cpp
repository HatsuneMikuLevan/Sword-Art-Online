

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 1, 2, 3, 3, 3, 4, 5, 5}; // Пример неубывающего массива
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return 0;
    }

    int distinct_count = 1;
    int max_consecutive_count = 1;
    int current_consecutive_count = 1;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] == arr[i - 1]) {
            current_consecutive_count++;
        } else {
            distinct_count++;
            current_consecutive_count = 1;
        }
        if (current_consecutive_count > max_consecutive_count) {
            max_consecutive_count = current_consecutive_count;
        }
    }

    std::cout << "Максимальное количество одинаковых элементов подряд: " << max_consecutive_count << std::endl;
    std::cout << "Количество различных чисел в массиве: " << distinct_count << std::endl;
    return 0;
}
