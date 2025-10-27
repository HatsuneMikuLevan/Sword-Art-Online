#include <iostream>

void solve444(double x) {
    if (x > 5) {
        std::cout << "Точка с координатой x = " << x << " попадает в область I." << std::endl;
    } else if (x > -1 && x < 5) {
        std::cout << "Точка с координатой x = " << x << " попадает в область II." << std::endl;
    } else {
        std::cout << "Точка с координатой x = " << x << " не попадает ни в область I, ни в область II." << std::endl;
    }
}
