#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x1, y1, x2, y2;
    std::cout << "Введите координаты первой точки (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты второй точки (x2, y2): ";
    std::cin >> x2 >> y2;

    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Расстояние между точками: " << distance << std::endl;

    return 0;
}
