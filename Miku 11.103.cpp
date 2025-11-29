

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> arr(20); // Массив из 20 элементов
    // Заполните массив arr данными
    // Например:
    for (int i = 0; i < 20; ++i) {
        arr[i] = i % 10;
    }

    if (arr.size() < 5) {
        std::cout << "Недостаточно элементов." << std::endl;
        return 1;
    }

    int max_sum = 0;
    int best_start_index = 0;

    // Сумма первых 5 элементов
    for (int i = 0; i < 5; ++i) {
        max_sum += arr[i];
    }
    int current_sum = max_sum;

    // Скользящее окно
    for (int i = 1; i <= arr.size() - 5; ++i) {
        current_sum = current_sum - arr[i - 1] + arr[i + 4];
        if (current_sum > max_sum) {
            max_sum = current_sum;
            best_start_index = i;
        }
    }

    std::cout << "Максимальная сумма пяти соседних элементов: " << max_sum << std::endl;
    std::cout << "Начальный индекс: " << best_start_index << std::endl;
    return 0;
}
