#include <iostream>

void determineRegion_4_5(double y) {
    if (y > 3) {
        std::cout << "Точка попадает в область I." << std::endl;
    } else if (y > 0 && y < 3) {
        std::cout << "Точка попадает в область II." << std::endl;
    } else {
        std::cout << "Точка находится на границе или вне областей I и II." << std::endl;
    }
}

int main() {
    double y_coord;
    std::cout << "Введите координату y: ";
    std::cin >> y_coord;
    determineRegion_4_5(y_coord);
    return 0;
}
