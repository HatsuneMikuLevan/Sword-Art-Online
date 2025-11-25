

#include <iostream>
#include <vector>

void solve_11_28(const std::vector<int>& arr) {
    std::cout << "Номера элементов, оканчивающихся на 0: ";
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 10 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

