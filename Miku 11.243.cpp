

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    // Данные для 20 точек (пример)
    std::vector<double> x = {1.0, 5.0, 2.0, 8.0, 3.0, 7.0, 4.0, 6.0, 9.0, 0.0, 1.5, 5.5, 2.5, 8.5, 3.5, 7.5, 4.5, 6.5, 9.5, 0.5};
    std::vector<double> y = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 0.0, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 0.5};
    int n = x.size();

    double minX = std::numeric_limits<double>::max();
    double maxX = std::numeric_limits<double>::min();
    double minY = std::numeric_limits<double>::max();
    double maxY = std::numeric_limits<double>::min();

    for (int i = 0; i < n; ++i) {
        if (x[i] < minX) minX = x[i];
        if (x[i] > maxX) maxX = x[i];
        if (y[i] < minY) minY = y[i];
        if (y[i] > maxY) maxY = y[i];
    }

    std::cout << "Координаты левого нижнего угла: (" << minX << ", " << minY << ")" << std::endl;
    std::cout << "Координаты правого верхнего угла: (" << maxX << ", " << maxY << ")" << std::endl;

    return 0;
}
