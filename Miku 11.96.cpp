

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solve_11_96(const std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }
    int min_val = *std::min_element(arr.begin(), arr.end());
    int max_val = *std::max_element(arr.begin(), arr.end());
    double avg = static_cast<double>(min_val + max_val) / 2.0;
    int count = 0;
    std::cout << "Номера элементов, больших среднего (" << avg << "):" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] > avg) {
            std::cout << i << " ";
            count++;
        }
    }
    std::cout << std::endl;
    std::cout << "Количество таких элементов: " << count << std::endl;
}
