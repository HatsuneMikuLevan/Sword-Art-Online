
#include <iostream>
#include <iomanip>

int main() {
    for (double i = 2.2; i <= 4.2; i += 0.2) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
