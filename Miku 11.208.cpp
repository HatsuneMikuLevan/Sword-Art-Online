

#include <iostream>
#include <vector>

void solve_11_208(const std::vector<int>& arr) {
    int last_even_pair_index = -1;
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {
            last_even_pair_index = i;
        }
    }

    if (last_even_pair_index != -1) {
        for (int i = 0; i < last_even_pair_index; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Пар соседних четных чисел не найдено" << std::endl;
    }
}
