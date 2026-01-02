

#include <iostream>
#include <vector>
#include <cfloat>

void solve_11_140(const std::vector<double>& times) {
    double min1 = DBL_MAX;
    double min2 = DBL_MAX;

    for (double time : times) {
        if (time < min1) {
            min2 = min1;
            min1 = time;
        } else if (time < min2 && time > min1) {
            min2 = time;
        }
    }
    std::cout << "Min times: " << min1 << ", " << min2 << std::endl;
}
