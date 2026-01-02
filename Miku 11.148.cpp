

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11_148(std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }

    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i+1] < arr[i]) {
            std::swap(arr[i], arr[i+1]);
        }
    }

    std::cout << "После одного прохода сортировки пузырьком, в последнем элементе массива оказалось число: " << arr.back() << std::endl;
}
