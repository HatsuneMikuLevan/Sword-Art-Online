

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<double> resistances = {10.0, 5.0, 2.2,  1.0, 0.5}; 

    std::vector<double> parallelResistances = {10.0, 5.0, 2.2};

    double sumReciprocals = 0.0;
    for (double r : parallelResistances) {
        sumReciprocals += 1.0 / r;
    }

    double totalParallelResistance = 1.0 / sumReciprocals;

    std::cout << "Общее сопротивление параллельной цепи: " << totalParallelResistance << std::endl;

    return 0;
}
