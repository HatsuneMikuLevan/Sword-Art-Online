#include <iostream>

int main() {
    double mass1, volume1, mass2, volume2;
    std::cout << "Введите массу и объем первого тела: ";
    std::cin >> mass1 >> volume1;
    std::cout << "Введите массу и объем второго тела: ";
    std::cin >> mass2 >> volume2;
    double density1 = mass1 / volume1;
    double density2 = mass2 / volume2;
    if (density1 > density2) {
        std::cout << "Первое тело имеет большую плотность." << std::endl;
    } else if (density2 > density1) {
        std::cout << "Второе тело имеет большую плотность." << std::endl;
    } else {
        std::cout << "Плотности тел равны." << std::endl;
    }
    return 0;
}
