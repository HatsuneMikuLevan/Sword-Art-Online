#include <iostream>

int main() {
    const double METERS_PER_FOOT = 0.3048;
    const double METERS_PER_KM = 1000.0;
    double distance_km, distance_feet;

    std::cout << "Введите расстояние в километрах: ";
    std::cin >> distance_km;
    std::cout << "Введите расстояние в футах: ";
    std::cin >> distance_feet;

    double distance_feet_in_km = (distance_feet * METERS_PER_FOOT) / METERS_PER_KM;

    if (distance_km < distance_feet_in_km) {
        std::cout << "Расстояние в километрах меньше." << std::endl;
    } else if (distance_feet_in_km < distance_km) {
        std::cout << "Расстояние в футах меньше." << std::endl;
    } else {
        std::cout << "Расстояния равны." << std::endl;
    }

    return 0;
}
