

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 10; i <= 25; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i + 0.4 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 25; i <= 35; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i + 0.5 << " " << i - 0.2 << std::endl;
    }
    return 0;
}
