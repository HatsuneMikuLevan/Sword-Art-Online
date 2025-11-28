

#include <iostream>
#include <vector>
#include <numeric>

void solve_11_95(const std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }
    long long sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    int count = 0;
    std::cout << "Номера элементов, больших суммы (" << sum << "):" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] > sum) {
            std::cout << i << " ";
            count++;
        }
    }
    std::cout << std::endl;
    std::cout << "Количество таких элементов: " << count << std::endl;
}
