#include <iostream>
#include <cmath>

int main() {
    const double R = 6350; 
    double height;

    std::cout << "Введите высоту над Землей в километрах: ";
    std::cin >> height;

    double distance = sqrt(2 * height * R + height * height);
    std::cout << "Расстояние до линии горизонта: " << distance << " км" << std::endl;

    return 0;
}
