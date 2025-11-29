

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_115() {

    std::vector<double> prices = {150.0, 220.5, 90.0, 350.0, /* ... 16 других значений ... */ 180.0};


    double min_price = INT_MAX; // Инициализируем минимальное значение максимально возможным

  

    for (double price : prices) {
        if (price < min_price) {
            min_price = price;
        }
    }
    std::cout << "Стоимость самых дешевых конфет: " << min_price << std::endl;
}
