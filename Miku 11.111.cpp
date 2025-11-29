

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Пример массива целых чисел
    std::vector<int> arr = {1, 3, 5, 4, 7, 9, 11, 2, 1, 3};
    int max_len = 0;
    int current_len = 0;
    for (int num : arr) {
        if (num % 2 != 0) {
            current_len++;
        } else {
            max_len = std::max(max_len, current_len);
            current_len = 0;
        }
    }
    max_len = std::max(max_len, current_len); // Проверка последнего отрезка
    std::cout << "Наибольшая длина отрезка нечетных чисел: " << max_len << std::endl;
    return 0;
}
