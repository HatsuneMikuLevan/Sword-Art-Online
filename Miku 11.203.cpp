

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11203(const std::vector<int>& arr, int n) {
    auto it = std::upper_bound(arr.begin(), arr.end(), n);
    if (it == arr.end()) {
        std::cout << "Элементов, больших заданного числа " << n << ", нет." << std::endl;
    } else {

            std::cout << "Элементов, следующих за первым элементом, большим " << n << ", нет." << std::endl;
        } else {
            std::cout << "Элементы, следующие за первым элементом, большим " << n << ": ";
            while (it != arr.end()) {
                std::cout << *it << " ";
                ++it;
            }
            std::cout << std::endl;
        }
    }
}

