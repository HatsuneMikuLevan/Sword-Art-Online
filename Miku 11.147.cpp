

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void solve_11_147(std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }

    int max_abs = -1;
    int max_abs_index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (std::abs(arr[i]) > max_abs) {
            max_abs = std::abs(arr[i]);
            max_abs_index = i;
        }
    }

    if (max_abs_index != -1) {
        arr[max_abs_index] = -arr[max_abs_index];
        std::cout << "Знак элемента с максимальным модулем изменен. Новое значение: " << arr[max_abs_index] << std::endl;
    }
}
