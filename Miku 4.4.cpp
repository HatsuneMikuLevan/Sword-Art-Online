#include <iostream>

void determineRegion_4_4(double x) {
    if (x > 0 && x < 4) {
        std::cout << "Точка попадает в область I." << std::endl;
    } else if (x > 4) {
        std::cout << "Точка попадает в область II." << std::endl;
    } else {
        std::cout << "Точка находится на границе или вне областей I и II." << std::endl;
    }
}

int main() {
    double x_coord;
    std::cout << "Введите координату x: ";
    std::cin >> x_coord;
    determineRegion_4_4(x_coord);
    return 0;
}
