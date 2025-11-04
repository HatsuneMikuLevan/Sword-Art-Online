
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 21; i >= 10; --i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 1.8 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 45; i >= 25; --i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.5 << " " << i - 0.8 << std::endl;
    }
    return 0;
}
