

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "x\tsin(x)" << std::endl;
    for (double x = 0.1; x <= 1.5; x += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << x << "\t" << std::fixed << std::setprecision(4) << std::sin(x) << std::endl;
    }
    return 0;
}
