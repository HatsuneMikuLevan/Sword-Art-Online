#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество предметов: ";
    std::cin >> n;
    double total_mass = 0.0;
    for (int i = 0; i < n; ++i) {
        double item_mass;
        std::cout << "Введите массу предмета " << i + 1 << ": ";
        std::cin >> item_mass;
        total_mass += item_mass;
    }
    std::cout << "Общая масса груза: " << total_mass << std::endl;
    return 0;
}
