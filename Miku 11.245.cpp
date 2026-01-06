

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    int size = a.size();
    std::vector<int> b(size);

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            b[i] = std::pow(a[i], 2);
        } else {
            b[i] = 2 * a[i];
        }
    }

    std::cout << "Array a: ";
    for (int val : a) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Array b: ";
    for (int val : b) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
