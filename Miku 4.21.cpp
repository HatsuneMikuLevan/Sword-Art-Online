#include <iostream>
#include <algorithm>

int main() {
    double x1, y1, w1, h1;
    double x2, y2, w2, h2;

    std::cout << "Введите координаты левого нижнего угла и длины сторон первого прямоугольника (x y w h): ";
    std::cin >> x1 >> y1 >> w1 >> h1;

    std::cout << "Введите координаты левого нижнего угла и длины сторон второго прямоугольника (x y w h): ";
    std::cin >> x2 >> y2 >> w2 >> h2;

    double x_min = std::min(x1, x2);
    double y_min = std::min(y1, y2);

    double x_max = std::max(x1 + w1, x2 + w2);
    double y_max = std::max(y1 + h1, y2 + h2);

    std::cout << "Координаты левого нижнего угла минимального прямоугольника: (" << x_min << ", " << y_min << ")" << std::endl;
    std::cout << "Координаты правого верхнего угла минимального прямоугольника: (" << x_max << ", " << y_max << ")" << std::endl;

    return 0;
}
