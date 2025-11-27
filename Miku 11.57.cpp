
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

void compareHalfMonths(const std::vector<double>& precipitation) {
    double firstHalf = std::accumulate(precipitation.begin(), precipitation.begin() + 15, 0.0);
    double secondHalf = std::accumulate(precipitation.begin() + 15, precipitation.end(), 0.0);

    if (firstHalf > secondHalf) {
        std::cout << "В первую половину июня выпало больше осадков." << std::endl;
    } else if (secondHalf > firstHalf) {
        std::cout << "Во вторую половину июня выпало больше осадков." << std::endl;
    } else {
        std::cout << "В обе половины июня выпало одинаковое количество осадков." << std::endl;
    }
}

void findMaxDecade(const std::vector<double>& precipitation) {
    double decade1 = std::accumulate(precipitation.begin(), precipitation.begin() + 10, 0.0);
    double decade2 = std::accumulate(precipitation.begin() + 10, precipitation.begin() + 20, 0.0);
    double decade3 = std::accumulate(precipitation.begin() + 20, precipitation.end(), 0.0);

    std::vector<double> decades = {decade1, decade2, decade3};
    int maxDecadeIndex = std::distance(decades.begin(), std::max_element(decades.begin(), decades.end()));

    std::cout << "Больше всего осадков выпало в декаду номер " << maxDecadeIndex + 1 << "." << std::endl;
}

int main() {
    // Пример данных для 30 дней июня
    std::vector<double> junePrecipitation = {
        1.2, 0.5, 3.1, 0.0, 2.5, 4.2, 1.1, 0.0, 0.5, 3.0, // Декада 1
        5.1, 6.2, 4.5, 3.1, 2.2, 1.5, 0.0, 0.0, 1.1, 2.5, // Декада 2
        0.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0  // Декада 3
    };

    std::cout << "а) ";
    compareHalfMonths(junePrecipitation);
    std::cout << "б) ";
    findMaxDecade(junePrecipitation);

    return 0;
}
