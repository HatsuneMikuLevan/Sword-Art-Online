

#include <iostream>
#include <iomanip>

int main() {
    double m;
    std::cout << "Введите число m (0.52 < m < 33.7): ";
    std::cin >> m;

    for (int x = 1; x <= 100; ++x) {
        double y = (static_cast<double>(x * x) + 100.0) / (static_cast<double>(x) + 200.0);
        if (y < m) {
            std::cout << "y(" << x << ") = " << y << std::endl;
        }
    }

    return 0;
}
