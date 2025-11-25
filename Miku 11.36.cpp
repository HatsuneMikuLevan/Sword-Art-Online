

#include <iostream>
#include <vector>

void solve_11_36_a(std::vector<double>& arr, int k1, double n) {
    if (k1 < 1 || k1 > arr.size()) {
        std::cout << "Некорректный номер k1" << std::endl;
        return;
    }
    double val1 = arr[k1 - 1];
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            arr[i] -= val1;
        } else if (arr[i] < 0) {
            arr[i] -= n;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_36_b(std::vector<double>& arr, double n, double a, double b) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            arr[i] += n;
        } else if (arr[i] > 0) {
            arr[i] -= a;
        } else {
            arr[i] += b;
        }
    }
}
