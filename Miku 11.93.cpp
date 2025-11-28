

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

void solve11_93(const std::vector<double>& car_costs, const std::vector<double>& moto_costs) {
    if (car_costs.empty() || moto_costs.empty()) {
        std::cout << "Недостаточно данных для сравнения." << std::endl;
        return;
    }

    double sum_cars = std::accumulate(car_costs.begin(), car_costs.end(), 0.0);
    double avg_cars = sum_cars / car_costs.size();

    double sum_motos = std::accumulate(moto_costs.begin(), moto_costs.end(), 0.0);
    double avg_motos = sum_motos / moto_costs.size();

    bool result = avg_cars > 3 * avg_motos;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средняя стоимость автомобилей: $" << avg_cars << std::endl;
    std::cout << "Средняя стоимость мотоциклов: $" << avg_motos << std::endl;
    if (result) {
        std::cout << "Верно, средняя стоимость автомобилей превышает среднюю стоимость мотоциклов более чем в 3 раза." << std::endl;
    } else {
        std::cout << "Неверно, средняя стоимость автомобилей не превышает среднюю стоимость мотоциклов более чем в 3 раза." << std::endl;
    }
}

int main() {
    std::vector<double> car_prices = {6000, 8500, 12000, 5500, 7200};
    std::vector<double> moto_prices = {1500, 2100, 900, 3200, 1800};
    solve11_93(car_prices, moto_prices);
    return 0;
}
