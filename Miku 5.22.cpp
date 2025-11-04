

#include <iostream>
#include <iomanip>

int main() {
    double pricePerKg;
    std::cout << "Введите стоимость 1 кг конфет: ";
    std::cin >> pricePerKg;
    std::cout << "Масса (г)\tСтоимость (руб)" << std::endl;
    for (int mass = 100; mass <= 2000; mass += 100) {
        double cost = (static_cast<double>(mass) / 1000.0) * pricePerKg;
        std::cout << mass << "\t\t" << std::fixed << std::setprecision(2) << cost << std::endl;
    }
    return 0;
}
