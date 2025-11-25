

#include <iostream>
#include <vector>

void solve_11_35_a(std::vector<double>& arr, int m1, int m2) {
    if (m1 < 1  m1 > arr.size()  m2 < 1 || m2 > arr.size()) {
        std::cout << "Некорректные номера m1 или m2" << std::endl;
        return;
    }
    double val1 = arr[m1 - 1];
    double val2 = arr[m2 - 1];
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            arr[i] += val1;
        } else {
            arr[i] += val2;
        }
    }
}
#include <iostream>
#include <vector>

void solve_11_35_b(std::vector<double>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
  
        if ((i + 1) % 2 == 0) {
            arr[i] *= 2.0;
        } else {
            arr[i] -= 1.0;
        }
    }
}
