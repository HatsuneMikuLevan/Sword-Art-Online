
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double R = 6350.0;
    std::cout << "Высота (км)\tРасстояние до горизонта (км)" << std::endl;
    for (int h = 1; h <= 10; ++h) {
        double d = std::sqrt(2 * R * h + h * h);
        std::cout << h << "\t\t" << std::fixed << std::setprecision(2) << d << std::endl;
    }
    return 0;
}
