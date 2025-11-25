

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

void solve_11_33_a(std::vector<double> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 10.0) {
            arr[i] = std::sqrt(arr[i]);
        }
    }
    std::cout << "Массив после (а): ";
    for (double x : arr) std::cout << std::fixed << std::setprecision(2) << x << " ";
    std::cout << std::endl;
}

void solve_11_33_b(std::vector<double> arr) {
    for (int i = 0; i < arr.size(); i += 2) {
        arr[i] = std::abs(arr[i]);
    }
    std::cout << "Массив после (б): ";
    for (double x : arr) std::cout << std::fixed << std::setprecision(2) << x << " ";
    std::cout << std::endl;
}

