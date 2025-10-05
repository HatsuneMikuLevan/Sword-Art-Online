#include <iostream>

int main() {
    double population;
    double area;
    double density;

    std::cout << "Введите количество жителей: ";
    std::cin >> population;

    std::cout << "Введите площадь территории (в кв. км): ";
    std::cin >> area;

    if (area > 0) {
        density = population / area;
        std::cout << "Плотность населения составляет: " << density << " чел./кв. км" << std::endl;
    } else {
        std::cout << "Площадь территории не может быть нулевой или отрицательной." << std::endl;
    }

    return 0;
}
