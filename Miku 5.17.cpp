
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "x\ty" << std::endl;
    for (int x = 4; x <= 28; ++x) {
        double t = x + 3;
        double y = 3 * t * t + 4.87 * t - 3;
        std::cout << x << "\t" << std::fixed << std::setprecision(2) << y << std::endl;
    }
    return 0;
}
