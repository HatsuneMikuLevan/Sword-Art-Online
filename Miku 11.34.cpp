

#include <iostream>
#include <vector>

void solve_11_34_a(std::vector<double>& arr, int k1, int k2) {
    if (k1 < 1  k1 > arr.size()  k2 < 1 || k2 > arr.size()) {
        std::cout << "Некорректные номера k1 или k2" << std::endl;
        return;
    }
    double val1 = arr[k1 - 1];
    double val2 = arr[k2 - 1];
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            arr[i] -= val1;
        } else {
            arr[i] -= val2;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_34_b(std::vector<double>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
 
        if ((i + 1) % 2 != 0) {
            arr[i] += 1.0;
        } else {
            arr[i] -= 1.0;
        }
    }
}
