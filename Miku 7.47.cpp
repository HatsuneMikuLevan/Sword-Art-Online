7.47

#include <iostream>

int main() {
    double price;
    double total_cost = 0.0;
    std::cout << "Введите стоимость товаров (0 или отрицательное число для завершения):" << std::endl;

    while (std::cin >> price && price > 0) {
        if (price > 1000.0) {
            total_cost += price;
        }
    }

    std::cout << "Общая стоимость товаров дороже 1000 рублей: " << total_cost << std::endl;
    return 0;
}
