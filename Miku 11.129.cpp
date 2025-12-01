

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11129(const std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for (int val : arr) {
        if (val > max_val) max_val = val;
        if (val < min_val) min_val = val;
    }

    std::cout << "Номера максимальных элементов (значение " << max_val << "): ";
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == max_val) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Номера минимальных элементов (значение " << min_val << "): ";
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == min_val) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {1, 5, 2, 5, 3, 1, 5, 4, 1};
    solve_11129(data);
    return 0;
}
