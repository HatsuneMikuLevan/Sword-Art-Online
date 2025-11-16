

#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

int main() {
    double max_area = std::numeric_limits<double>::lowest();
    double current_area;
    int n;

    std::cout << "Введите количество квадратов: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Некорректный ввод количества квадратов." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите площадь квадрата " << i + 1 << ": ";
        std::cin >> current_area;
        if (current_area > max_area) {
            max_area = current_area;
        }
    }

    double side = std::sqrt(max_area);
    double diagonal = side * std::sqrt(2.0);
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Длина диагонали самого большого квадрата: " << diagonal << std::endl;

    return 0;
}
