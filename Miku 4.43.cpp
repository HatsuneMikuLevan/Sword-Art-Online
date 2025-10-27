#include <iostream>

void solve443(double x, double y) {
    if (x > 3 && y > 2) {
        std::cout << "Точка (" << x << ", " << y << ") попадает в область I." << std::endl;
    } else {
        std::cout << "Точка (" << x << ", " << y << ") не попадает в область I." << std::endl;
    }
}
