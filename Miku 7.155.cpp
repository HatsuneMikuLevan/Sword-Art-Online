

#include <iostream>
#include <vector>
#include <algorithm>

int findMaxIncreasingFragment(const std::vector<int>& arr) {
    if (arr.empty()) return 0;
    int max_len = 1;
    int current_len = 1;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = std::max(max_len, current_len);
    }
    return max_len;
}

int main() {
    // Пример использования
    std::vector<int> sequence = {1, 2, 3, 1, 2, 4, 5, 1};
    int result = findMaxIncreasingFragment(sequence);
    std::cout << "Наибольшая длина монотонно возрастающего фрагмента: " << result << std::endl; // Ожидаемый результат: 4 (фрагмент 1, 2, 4, 5)

    return 0;
}
