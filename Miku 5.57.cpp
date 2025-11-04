

#include <iostream>
#include <cmath>

int main() {
    double x1 = 1 - std::sqrt(10.0 / 3.0);
    double x2 = 1 + std::sqrt(10.0 / 3.0);
    int N = 100000;
    double h = (x2 - x1) / N;
    double area = 0.0;

    for (int i = 0; i < N; ++i) {
        double x = x1 + i * h;
        double y_parabola = 0.3 * (x - 1) * (x - 1) + 3;
        double y_line = 4;
        area += (y_line - y_parabola) * h;
    }

    std::cout << "Приближенная площадь фигуры: " << area << std::endl;
    return 0;
}
