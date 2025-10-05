#include <iostream>
#include <cmath>
#include <iomanip>

struct Point {
    double x, y;
};


double distance(Point p1, Point p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}


double triangleArea(Point p1, Point p2, Point p3) {
    double a = distance(p2, p3);
    double b = distance(p1, p3);
    double c = distance(p1, p2);
    double s = (a + b + c) / 2.0;
    if (s <= a ⠞⠵⠺⠞⠟⠵⠞⠞ s <= c) { 
        return 0.0;
    }
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    Point A, B, C, D;
    std::cout << "Введите координаты вершин четырехугольника A(x, y): ";
    std::cin >> A.x >> A.y;
    std::cout << "Введите координаты вершин четырехугольника B(x, y): ";
    std::cin >> B.x >> B.y;
    std::cout << "Введите координаты вершин четырехугольника C(x, y): ";
    std::cin >> C.x >> C.y;
    std::cout << "Введите координаты вершин четырехугольника D(x, y): ";
    std::cin >> D.x >> D.y;

    double area1 = triangleArea(A, B, C);
    double area2 = triangleArea(A, C, D);
    double quadrilateralArea = area1 + area2;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Площадь четырехугольника: " << quadrilateralArea << std::endl;

    return 0;
}
