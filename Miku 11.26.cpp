

#include <iostream>
#include <vector>

void solve_11_26(const std::vector<int>& arr) {
    std::cout << "Неотрицательные элементы: ";
    for (int x : arr) {
        if (x >= 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Отрицательные элементы: ";
    for (int x : arr) {
        if (x < 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;
}

