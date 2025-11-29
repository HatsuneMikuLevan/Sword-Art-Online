

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_116() {

    std::vector<double> results = {45.2, 38.5, 52.1, 35.9, /* ... 21 другое значение ... */ 41.0};


    double min_result = INT_MAX; // Инициализируем минимальное значение



    for (double result : results) {
        if (result < min_result) {
            min_result = result;
        }
    }
    std::cout << "Результат спортсмена победителя гонки: " << min_result << std::endl;
}
