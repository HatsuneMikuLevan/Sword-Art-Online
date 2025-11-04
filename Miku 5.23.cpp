
#include <iostream>
#include <iomanip>

int main() {
    for (double i = 2.1; i <= 2.8; i += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
