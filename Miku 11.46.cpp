

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> resistances = {10.0, 5.0, 2.2, 1.0, 0.5};
  
    std::vector<double> seriesResistances = {10.0, 5.0, 2.2, 1.0, 0.5};

    double totalSeriesResistance = std::accumulate(seriesResistances.begin(), seriesResistances.end(), 0.0);

    std::cout << "Общее сопротивление последовательной цепи: " << totalSeriesResistance << std::endl;

    return 0;
}
