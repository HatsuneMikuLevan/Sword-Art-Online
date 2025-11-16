

#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

const double PI = 3.14159265358979323846;

int main() {
    double min_area = std::numeric_limits<double>::max();
    double current_area;
    int n;

    std::cout << "Введите количество кругов: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Некорректный ввод количества кругов." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите площадь круга " << i + 1 << ": ";
        std::cin >> current_area;
        if (current_area < min_area) {
            min_area = current_area;
        }
    }

    double radius = std::sqrt(min_area / PI);
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Радиус самого маленького круга: " << radius << std::endl;

    return 0;
}
