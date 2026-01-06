

#include <iostream>
#include <vector>

void solve_11_210(const std::vector<int>& arr) {
    for (size_t i = 0; i + 2 < arr.size(); ++i) {
        if (arr[i+1] > arr[i] && arr[i+1] > arr[i+2]) {
            std::cout << "Первая такая тройка найдена по индексам: " << i << ", " << i+1 << ", " << i+2 << std::endl;
            return;
        }
    }
    std::cout << "Таких троек не найдено" << std::endl;
}
