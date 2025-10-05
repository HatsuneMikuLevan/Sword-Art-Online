#include <iostream>
#include <cmath>
#include <iomanip>

#ifndef M_PI
#define M_PI 3.14
#endif

int main() {
    double a, b, alpha_deg;
    std::cout << "Введите основания и угол при большем основании (в градусах): ";
    std::cin >> a >> b >> alpha_deg;

    double alpha_rad = alpha_deg * M_PI / 180.0;
    double h = std::abs(a - b) / 2.0 * std::tan(alpha_rad);
    double area = (a + b) / 2.0 * h;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Площадь трапеции: " << area << std::endl;

    return 0;
}
