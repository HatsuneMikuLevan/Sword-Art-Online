
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    for (int i = 2; i <= 15; ++i) {
        std::cout << "sin(" << i << ") = " << std::fixed << std::setprecision(4) << std::sin(i) << std::endl;
    }
    return 0;
}
