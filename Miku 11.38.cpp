

#include <iostream>
#include <vector>
#include <cmath>

void solve_11_38_a(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (std::abs(arr[i] % 10) == 4) {
            arr[i] /= 2;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_38_b(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] *= arr[i];
        } else {
            arr[i] *= 2;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_38_c(std::vector<int>& arr, int a, int b) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] += a;
        }
        // Номер элемента i + 1
        if ((i + 1) % 2 == 0) {
            arr[i] -= b;
        }
    }
}
