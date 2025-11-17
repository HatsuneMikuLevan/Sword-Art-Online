

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void solve_7_152(const std::vector<double>& a, double n) {
    int nearest_index = -1;
    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] < n && n < a[i + 1]) {
            if (std::abs(n - a[i]) < std::abs(n - a[i + 1])) {
                nearest_index = i;
            } else {
                nearest_index = i + 1;
            }
            break;
        }
    }
    if (nearest_index != -1) {
        std::cout << "Ближайший элемент: a[" << nearest_index << "] = " << a[nearest_index] << std::endl;
    } else {
        std::cout << "Число n не находится между элементами последовательности." << std::endl;
    }
}
