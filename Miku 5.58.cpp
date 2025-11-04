

#include <iostream>
#include <cmath>

int main() {
    double a = 0.0;
    double b = 1.0;
    int N = 100000;
    double h = (b - a) / N;
    double area = 0.0;

    for (int i = 0; i < N; ++i) {
        double x = a + i * h;
        double y = 0.4 * (x + 2) * (x + 2) + 1;
        area += y * h;
    }

    std::cout << "Приближенная площадь фигуры: " << area << std::endl;
    return 0;
}
