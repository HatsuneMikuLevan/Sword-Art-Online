

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> prices = {10.50, 25.00, 120.75, 5.99, 50.00, 3.25, 15.00, 8.75, 45.10, 30.00, 6.50, 19.99}; 

    double totalCost = std::accumulate(prices.begin(), prices.end(), 0.0);

    std::cout << "Общая стоимость всех предметов: " << totalCost << std::endl;

    return 0;
}
