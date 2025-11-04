

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 21; i <= 35; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.6 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 16; i <= 24; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.5 << " " << i + 0.8 << std::endl;
    }
    return 0;
}
