

#include <iostream>
#include <vector>

void solve_11_31(const std::vector<int>& arr) {
    std::cout << "Элементы на четных местах: ";
    for (int i = 0; i < arr.size(); i += 2) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Элементы на нечетных местах: ";
    for (int i = 1; i < arr.size(); i += 2) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

