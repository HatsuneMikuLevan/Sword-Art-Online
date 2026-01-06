

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<double> m = {1.0, -2.0, 3.0, -4.0, 5.0};
    int size = m.size();
    std::vector<double> n(size);

    for (int i = 0; i < size; ++i) {
        if (m[i] >= 0) {
            n[i] = m[i] / 3.0;
        } else {
            n[i] = std::pow(m[i], 2);
        }
    }

    std::cout << "Array m: ";
    for (double val : m) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Array n: ";
    for (double val : n) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
