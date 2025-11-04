

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "x\tsqrt(x)" << std::endl;
    for (double x = 0.1; x <= 0.9; x += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << x << "\t" << std::fixed << std::setprecision(4) << std::sqrt(x) << std::endl;
    }
    return 0;
}
