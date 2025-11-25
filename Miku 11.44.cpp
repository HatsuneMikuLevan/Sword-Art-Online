1

#include <iostream>
#include <vector>
#include <numeric>

int main() {

    std::vector<double> precipitations = {1.2, 0.5, 3.1, 0.0, 2.5}; 

    std::vector<double> janPrecip = {1.2, 0.5, 3.1, 2.0, 0.0}; 

    double totalPrecipitation = std::accumulate(janPrecip.begin(), janPrecip.end(), 0.0);

    std::cout << "Общее количество осадков за январь: " << totalPrecipitation << std::endl;

    return 0;
}
