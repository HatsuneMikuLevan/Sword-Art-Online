

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> costs = {10.5, 20.0, 5.2, 15.1, 8.9, 22.3, 4.5, 11.1, 19.4, 7.6, 14.8, 3.1, 16.5, 9.7, 18.2, 6.4, 21.0, 12.6, 2.8, 17.9};
    double sum = std::accumulate(costs.begin(), costs.end(), 0.0);
    double average_cost = sum / costs.size();
    int count = 0;
    for (double cost : costs) {
        if (cost < average_cost) {
            count++;
        }
    }
    std::cout << "Количество видов товара со стоимостью меньше средней: " << count << std::endl;
    return 0;
}
