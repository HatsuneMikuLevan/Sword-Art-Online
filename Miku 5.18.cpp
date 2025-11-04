

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "a\tz" << std::endl;
    for (int a = 2; a <= 17; ++a) {
        double t = 3.0 * a;
        double z = 4.3 * t * t - 8 * t + 13;
        std::cout << a << "\t" << std::fixed << std::setprecision(2) << z << std::endl;
    }
    return 0;
}
