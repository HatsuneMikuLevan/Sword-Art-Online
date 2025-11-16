

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> car_costs = {6000.0, 8000.0, 12000.0, 5500.0};
    std::vector<double> motorcycle_costs = {1500.0, 2500.0, 1800.0};

    double sum_cars = std::accumulate(car_costs.begin(), car_costs.end(), 0.0);
    double avg_cars = sum_cars / car_costs.size();

    double sum_motorcycles = std::accumulate(motorcycle_costs.begin(), motorcycle_costs.end(), 0.0);
    double avg_motorcycles = sum_motorcycles / motorcycle_costs.size();

    std::cout << "Средняя стоимость автомобилей: " << avg_cars << std::endl;
    std::cout << "Средняя стоимость мотоциклов: " << avg_motorcycles << std::endl;

    if (avg_cars > 3 * avg_motorcycles) {
        std::cout << "Верно, средняя стоимость автомобилей превышает среднюю стоимость мотоциклов более чем в 3 раза." << std::endl;
    } else {
        std::cout << "Неверно, средняя стоимость автомобилей не превышает среднюю стоимость мотоциклов более чем в 3 раза." << std::endl;
    }

    return 0;
}
