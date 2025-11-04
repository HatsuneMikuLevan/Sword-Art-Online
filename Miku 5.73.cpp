

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double L = 4.5; // Длина палки
    const double PI = 3.14159265358979323846;
    
    std::cout << "Расстояние от стены (м) | Угол (градусы)" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    
    for (double D = 3.0; D <= L; D += 0.2) {
        if (D > L) D = L; // Ограничение на максимальное расстояние
        double alpha_rad = acos(D / L);
        double alpha_deg = alpha_rad * 180.0 / PI;
        std::cout << std::fixed << std::setprecision(2) << std::setw(24) << D << " | " << std::setw(15) << alpha_deg << std::endl;
    }
    
    return 0;
}
