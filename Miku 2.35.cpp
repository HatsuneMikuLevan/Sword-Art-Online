#include <iostream>

int main() {
    double S, V1, V2;
    double t = 0.5; 
    std::cout << "Введите начальное опережение S (км): ";
    std::cin >> S;
    std::cout << "Введите скорость V1 (км/ч): ";
    std::cin >> V1;
    std::cout << "Введите скорость V2 (км/ч): ";
    std::cin >> V2;
    double distance = (V1 - V2) * t + S;
    std::cout << "Расстояние между автомобилями через 30 минут: " << distance << " км" << std::endl;
    return 0;
}
