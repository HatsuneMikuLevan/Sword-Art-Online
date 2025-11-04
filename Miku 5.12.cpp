

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double p0 = 1.29;
    const double epsilon = 1.25e-4;
    std::cout << "Высота (м)\tПлотность (кг/м^3)" << std::endl;
    for (int h = 0; h <= 1000; h += 100) {
        double p = p0 * std::exp(-h * epsilon);
        std::cout << h << "\t\t" << std::fixed << std::setprecision(4) << p << std::endl;
    }
    return 0;
}
