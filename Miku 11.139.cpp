

#include <iostream>
#include <vector>
#include <climits>

void solve_11_139(const std::vector<double>& costs) {
    double max1 = -1.0;
    double max2 = -1.0;

    for (double cost : costs) {
        if (cost > max1) {
            max2 = max1;
            max1 = cost;
        } else if (cost > max2 && cost < max1) {
            max2 = cost;
        }
    }
    std::cout << "Max costs: " << max1 << ", " << max2 << std::endl;
}
