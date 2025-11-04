

#include <iostream>
#include <cmath>

int main() {
    double a = 0.0;
    double b = M_PI;
    int N = 100000; // Количество отрезков для точности
    double h = (b - a) / N;
    double area = 0.0;

    for (int i = 0; i < N; ++i) {
        double x = a + i * h;
        area += std::sin(x) * h;
    }

    std::cout << "Приближенная площадь одной арки синусоиды: " << area << std::endl;
    return 0;
}
