

#include <iostream>
#include <vector>

void solve_11_211(const std::vector<int>& arr) {
    int last_triple_index = -1;
    for (size_t i = 0; i + 2 < arr.size(); ++i) {
        if (arr[i+1] > arr[i] && arr[i+1] > arr[i+2]) {
            last_triple_index = i;
        }
    }

    if (last_triple_index != -1) {
        for (int i = 0; i < last_triple_index; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Таких троек не найдено" << std::endl;
    }
}
