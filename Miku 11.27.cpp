

#include <iostream>
#include <vector>

void solve_11_27(const std::vector<int>& arr) {
    std::cout << "Четные элементы: ";
    for (int x : arr) {
        if (x % 2 == 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Нечетные элементы: ";
    for (int x : arr) {
        if (x % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;
}

