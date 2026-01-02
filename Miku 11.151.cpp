

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

void print_array_151(const std::vector<int>& arr, const std::string& title) {
    std::cout << title << ": ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int m = 3; // 3-й элемент (индекс 2)
    int n = 7; // 7-й элемент (индекс 6)

    print_array_151(arr, "Начальный массив");

    // а) второй и пятый элементы (индексы 1 и 4)
    if (arr.size() >= 5) {
        std::swap(arr[1], arr[4]);
    }
    print_array_151(arr, "После обмена 2-го и 5-го");

    // б) m-й и n-й элементы
    if (arr.size() >= std::max(m, n) && m > 0 && n > 0) {
        std::swap(arr[m - 1], arr[n - 1]);
    }
    print_array_151(arr, "После обмена m-го и n-го");

    // в) третий и максимальный элементы (первый из них)
    if (!arr.empty() && arr.size() >= 3) {
        int max_val = std::numeric_limits<int>::min();
        int max_idx = -1;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > max_val) {
                max_val = arr[i];
                max_idx = i;
            }
        }
        if (max_idx != -1) {
            std::swap(arr[2], arr[max_idx]); // 3-й элемент (индекс 2)
        }
    }
    print_array_151(arr, "После обмена 3-го и макс.");

    // г) первый и минимальный элементы (последний из них)
    if (!arr.empty()) {
        int min_val = std::numeric_limits<int>::max();
        int min_idx = -1;
        for (int i = arr.size() - 1; i >= 0; --i) {
            if (arr[i] < min_val) {
                min_val = arr[i];
                min_idx = i;
            }
        }
        if (min_idx != -1) {
            std::swap(arr[0], arr[min_idx]); // 1-й элемент (индекс 0)
        }
    }
    print_array_151(arr, "После обмена 1-го и мин.");

    return 0;
}
