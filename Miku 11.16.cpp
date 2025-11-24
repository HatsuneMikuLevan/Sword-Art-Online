

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    // а) Арифметическая прогрессия
    int a1 = 1; // Первый член
    int p = 2;  // Разность
    std::vector<int> arr_arith(10);
    for (int i = 0; i < 10; ++i) {
        arr_arith[i] = a1 + i * p;
    }

    // б) Геометрическая прогрессия
    int b1 = 1; // Первый член
    int z = 2;  // Знаменатель
    std::vector<int> arr_geom(20);
    for (int i = 0; i < 20; ++i) {
        arr_geom[i] = b1 * std::pow(z, i);
    }

    // Вывод для проверки
    std::cout << "Арифметическая: ";
    for (int x : arr_arith) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Геометрическая: ";
    for (int x : arr_geom) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
