

#include <iostream>
#include <vector>

int main() {
    std::vector<double> m = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = m.size();
    std::vector<double> n(size);

    for (int i = 0; i < size; ++i) {
        int number = i + 1; // Номер элемента, считая с 1
        if (number % 2 != 0) {
            n[i] = number * m[i];
        } else {
            n[i] = m[i] / number;
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
