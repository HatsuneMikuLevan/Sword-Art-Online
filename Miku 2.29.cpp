#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

struct Point {
    double x, y;
};


double distance(Point p1, Point p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    Point A, B, C;
    std::cout << "Введите координаты вершин треугольника A(x, y): ";
    std::cin >> A.x >> A.y;
    std::cout << "Введите координаты вершин треугольника B(x, y): ";
    std::cin >> B.x >> B.y;
    std::cout << "Введите координаты вершин треугольника C(x, y): ";
    std::cin >> C.x >> C.y;

    double sideA = distance(B, C);
    double sideB = distance(A, C);
    double sideC = distance(A, B);

    double perimeter = sideA + sideB + sideC;
    double area = triangleArea(sideA, sideB, sideC);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Периметр треугольника: " << perimeter << std::endl;
    std::cout << "Площадь треугольника: " << area << std::endl;

    return 0;
}
