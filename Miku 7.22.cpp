

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int items_count = 8;
    std::vector<double> set1_prices(items_count);
    std::vector<double> set2_prices(items_count);

    // Заполнение данных
    // Пример:
    // for (int i = 0; i < items_count; ++i) {
    //     set1_prices[i] = ...;
    //     set2_prices[i] = ...;
    // }

    double set1_total = std::accumulate(set1_prices.begin(), set1_prices.end(), 0.0);
    double set2_total = std::accumulate(set2_prices.begin(), set2_prices.end(), 0.0);

    if (set1_total < set2_total) {
        std::cout << "Набор 1 более дешевый." << std::endl;
    } else if (set2_total < set1_total) {
        std::cout << "Набор 2 более дешевый." << std::endl;
    } else {
        std::cout << "Стоимость наборов одинакова." << std::endl;
    }

    return 0;
}
