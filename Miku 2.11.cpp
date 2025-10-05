#include <iostream>
#include <iomanip>

int main() {
    double mass;
    double volume;
    double density;

    
    std::cout << "Введите массу тела (в кг): ";
    std::cin >> mass;
    std::cout << "Введите объем тела (в м^3): ";
    std::cin >> volume;

    
    if (volume > 0) {
        
        density = mass / volume;

        
        std::cout << "Плотность материала тела: " << std::fixed << std::setprecision(2) << density << " кг/м^3";
    } else {
        std::cout << "Ошибка: Объем не может быть равен нулю или быть отрицательным.";
    }

    return 0;
}
