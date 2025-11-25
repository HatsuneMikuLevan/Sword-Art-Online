

#include <iostream>
#include <vector>

void solve_11_37_a(std::vector<double>& arr, int a1, double b) {
    if (a1 < 1 || a1 > arr.size()) {
        std::cout << "Некорректный номер a1" << std::endl;
        return;
    }
    double val1 = arr[a1 - 1];
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            arr[i] += val1;
        } else if (arr[i] == 0) {
            arr[i] -= b;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_37_b(std::vector<double>& arr, double a, double b, double c) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            arr[i] -= a;
        } else if (arr[i] < 0) {
            arr[i] -= b;
        } else {
            arr[i] += c;
        }
    }
}
