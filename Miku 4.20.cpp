#include <iostream>
#include <algorithm>

int main() {
    double x1_ln, y1_ln, x1_pv, y1_pv;
    double x2_ln, y2_ln, x2_pv, y2_pv;
    std::cout << "Введите координаты левого нижнего и правого верхнего углов первого прямоугольника (x1_ln y1_ln x1_pv y1_pv): ";
    std::cin >> x1_ln >> y1_ln >> x1_pv >> y1_pv;
    std::cout << "Введите координаты левого нижнего и правого верхнего углов второго прямоугольника (x2_ln y2_ln x2_pv y2_pv): ";
    std::cin >> x2_ln >> y2_ln >> x2_pv >> y2_pv;
    double min_x = std::min(x1_ln, x2_ln);
    double min_y = std::min(y1_ln, y2_ln);
    double max_x = std::max(x1_pv, x2_pv);
    double max_y = std::max(y1_pv, y2_pv);
    std::cout << "Координаты левого нижнего угла минимального прямоугольника: (" << min_x << ", " << min_y << ")" << std::endl;
    std::cout << "Координаты правого верхнего угла минимального прямоугольника: (" << max_x << ", " << max_y << ")" << std::endl;
    return 0;
}
