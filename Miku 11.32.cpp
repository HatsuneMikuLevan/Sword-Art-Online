

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

void solve_11_32_a(std::vector<double> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0.0) {
            arr[i] = std::abs(arr[i]);
        }
    }
    std::cout << "Массив после (а): ";
    for (double x : arr) std::cout << std::fixed << std::setprecision(2) << x << " ";
    std::cout << std::endl;
}

void solve_11_32_b(std::vector<double> arr) {
    for (int i = 1; i < arr.size(); i += 2) {
        if (arr[i] >= 0.0) { // Корень из отрицательного числа не берем
            arr[i] = std::sqrt(arr[i]);
        }
    }
    std::cout << "Массив после (б): ";
    for (double x : arr) std::cout << std::fixed << std::setprecision(2) << x << " ";
    std::cout << std::endl;
}

