
#include <iostream>
#include <iomanip>

int main() {
    for (double i = 3.2; i <= 3.9; i += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
