

#include <iostream>
#include <vector>

void removeNthProduct(std::vector<double>& costs, int n) {
    if (n >= 1 && n <= costs.size()) {
        int index = n - 1;
        for (size_t i = index; i < costs.size() - 1; ++i) {
            costs[i] = costs[i + 1];
        }
        costs.back() = 0.0;
    }
}

int main() {
    std::vector<double> productCosts = {10.5, 20.0, 35.2, 15.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0,
                                         100.0, 110.0, 120.0, 130.0, 140.0, 150.0, 160.0, 170.0, 180.0, 190.0};
    int n = 5; // Номер товара, который прекращают продавать

    removeNthProduct(productCosts, n);

    std::cout << "Массив стоимости оставшихся товаров: ";
    for (double cost : productCosts) {
        std::cout << cost << " ";
    }
    std::cout << std::endl;

    return 0;
}
