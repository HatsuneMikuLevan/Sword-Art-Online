

#include <iostream>
#include <vector>
#include <numeric>

bool doesNotExceedCapacity(const std::vector<double>& itemWeights, double capacity) {
    double totalWeight = std::accumulate(itemWeights.begin(), itemWeights.end(), 0.0);
    return totalWeight <= capacity;
}

int main() {
    // Пример данных для 30 предметов
    std::vector<double> weights(30, 50.0); // Допустим, каждый предмет весит 50 кг
    double truckCapacity = 1500.0; // Грузоподъемность 1500 кг

    std::cout << "Общая масса не превышает грузоподъемность? " << (doesNotExceedCapacity(weights, truckCapacity) ? "Да" : "Нет") << std::endl;

    return 0;
}
