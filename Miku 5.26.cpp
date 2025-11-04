
#include <iostream>
#include <iomanip>

int main() {
    for (double i = 4.4; i <= 6.4; i += 0.2) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
