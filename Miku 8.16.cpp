

#include <iostream>
#include <iomanip>

int main() {
    double m;
    std::cout << "Введите число m (0.5 < m < 1): ";
    std::cin >> m;

    int n = 1;
    double current_val = static_cast<double>(n) / (n + 1);
    while (current_val < m) {
        std::cout << "x(" << n << ") = " << current_val << std::endl;
        n++;
        current_val = static_cast<double>(n) / (n + 1);
    }

    return 0;
}
