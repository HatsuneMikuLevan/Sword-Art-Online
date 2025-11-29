

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_114() {

    std::vector<double> prices = {15000.0, 25000.5, 12000.0, 80000.0, /* ... 46 других значений ... */ 30000.0};


    double max_price = -1.0; // Инициализируем максимальное значение

   
    for (double price : prices) {
        if (price > max_price) {
            max_price = price;
        }
    }
    std::cout << "Стоимость самого дорогого автомобиля: " << max_price << std::endl;
}
